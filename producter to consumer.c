#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <unistd.h> 

#define producerNum  5
#define consumerNum  5
 
typedef struct _queue   //队列结构体
{
	int data[50];		//50个空位
	int HEAD;			//头结点
	int END;			//尾节点
}Queue;
 
struct data             //信号量结构体
{
	sem_t empty;
	sem_t full;
	Queue q;
};
 
pthread_mutex_t mutex;//创建一个互斥量
 
int num = 0;
struct data sem;		//创建信号量结构体变量
 
int InitQueue (Queue *q)   // 队列初始化
{
	if (q == NULL)
	{
		return 0;
	}
	
	q->HEAD = 0;
	q->END  = 0;
	
	return 1;
}
 
int QueueEmpty (Queue *q)      //判断空对情况
{
	if (q == NULL)
	{
		return 0;
	}
	
	return q->HEAD == q->END;
}
 
int QueueFull (Queue *q)     //判断队满的情况
{
	if (q == NULL)
	{
		return 0;
	}
	
	
	return q->HEAD == (q->END +1)%50;
} 
 
int QuitQueue (Queue *q, int *x)   //出队函数
{
	if (q == NULL)
	{
		return 0;
	}
	
	if (QueueEmpty(q))
	{
		return 0;
	}
	q->HEAD = (q->HEAD + 1) % 50;
	*x = q->data[q->HEAD];
	
	return 1;
}
 
int EnterQueue (Queue *q, int x)   //进队函数
{
	if (q == NULL)
	{
		return 0;
	}
	
	if (QueueFull(q))
	{
		return 0;
	}
	
	q->END = (q->END+1) % 50;
	q->data[q->HEAD] = x;
	
	return 1;
}
 
void *Producer()
{
	while(1)
	{
		sleep(1);			//间隔5秒           
		                                      
		sem_wait(&sem.empty);                 //信号量的P操作
		pthread_mutex_lock(&mutex);           //互斥量上锁，制造互斥说
		                                      
		num++;                                
		EnterQueue (  &(sem.q), num);           //产品进队
		printf("生产了一个产品：%d\n", num);  
		                                      
		pthread_mutex_unlock(&mutex);         //互斥锁解锁
		sem_post(&sem.full);                  //信号量的V操作
	}
}
/*  
 *  P，V操作的含义：P(S)表示申请一个资源，S.value>0表示有资源可用，其值为资源的数目；S.value=0表示无资源可用；S.value<0则他的大小表示S等待队列中的进程个数。V(S)表示释放一个资源，信号量的初值应大于等于0。P操作相当于“等待一个信号”，V操作相当于“发送一个新号”，在实现互斥过程中，V操作相当于发送一个信号说临界资源可用了。实际上，在实现互斥时，P、V操作相当于申请资源和释放资源。
 *
 */


void *Consumer()
{
	while(1)
	{
		sleep(1);
		
		sem_wait(&sem.full);           
		pthread_mutex_lock(&mutex);      
		
		num--;
		QuitQueue (&sem.q, &num);       //产品出对
		printf("消费了一个产品\n");
		
		pthread_mutex_unlock(&mutex);  
		sem_post(&sem.empty);         
	}
}
 
int main()
{
	sem_init(&sem.empty, 0, 49);    //信号量初始化（做多容纳50条消息，容纳了50条生产者将不会生产消息）
	sem_init(&sem.full, 0, 0);
	
	pthread_mutex_init(&mutex, NULL);  //互斥锁初始化
	InitQueue(&(sem.q));   //队列初始化
	


	//创建线程池，然后分别创建多个生产者、消费者线程放入线程池，一起运行
	pthread_t threadPool[producerNum+consumerNum];
    int i;
    for(i = 0; i < producerNum; i++)
	{
        pthread_t temp;
        if(pthread_create(&temp, NULL, Producer, NULL) == -1)
		{
            printf("创建生产者%d失败\n", i);
            exit(1);
        }
        threadPool[i] = temp;
    }
    for(i = 0; i < consumerNum; i++)
	{
        pthread_t temp;
        if(pthread_create(&temp, NULL, Consumer, NULL) == -1)
		{
            printf("创建消费者%d失败\n", i);
            exit(1);
        }
        threadPool[i+producerNum] = temp;
    }

    void * result;
    for(i = 0; i < producerNum+consumerNum; i++)
	{
        if(pthread_join(threadPool[i], &result) == -1)
		{
            exit(1);
        }
    }
	



	//信号量使用完之后销毁
	sem_destroy(&sem.empty);        
	sem_destroy(&sem.full);    
	
	//互斥锁销毁
	pthread_mutex_destroy(&mutex);  
	
	return 0;
}
