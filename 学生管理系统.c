/*ѧ������ϵͳ*/ 
/*�����ˣ�����Ѹ*/
/*��ϵ��ʽ��QQ��1609547089*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <direct.h>


struct Stu
{
	char name[32];
	char num[24];
	int grade;
};


int main()
{
	int max = 0,min;
	int sum = 0;
	int t;
	float ave = 0;
	char a[30];//�Զ����ļ��� 
	printf("�������ļ���\n");
	scanf("%s",a);
	strcat(a,".csv");
	
	
	int n;
	printf("������ѧ������\n");
	scanf("%d",&n);
	struct Stu str[n];
	min = n-1;
	
	
	FILE *pFile = fopen(a,"w");
	printf("ʹ�÷�����ͬһ�еĲ�ͬ����֮���ÿո���ֿ�\n��һ��ʹ�ûس���������\n");
	printf("����������(���� ѧ�� �ɼ�)��\n");
	
	
	system("pause");
	system("cls");
	
	
	int i;
	for(i = 0 ; i < n ; i++)
	{
		fflush(stdin);
		scanf("%s %s %d",&str[i].name,&str[i].num,&str[i].grade);
		sum+=str[i].grade;
	}
	ave = (float)sum/(float)n;
	
	
	
	for(i = 0 ; i < n ; i++)
	{
		if(str[max].grade < str[i].grade)
		{
			max = i;
		}
		
		if(str[min].grade > str[i].grade)
		{
			min = i;
		}
	}
	
	
	fprintf(pFile, "����,ѧ��,�ɼ�\n");
	for(i = 0 ; i < n ; i++)
	{
		fprintf(pFile,"%s,'%s,%d\n",str[i].name,str[i].num,str[i].grade);	
	} 
	fputs("\n",pFile);
	fprintf(pFile,",,average=%.2f\n",ave);
	fprintf(pFile,"%s,'%s,%d\n",str[max].name,str[max].num,str[max].grade);
	fprintf(pFile,"%s,'%s,%d\n",str[min].name,str[min].num,str[min].grade);

	
	char* buffer = getcwd(NULL,0);//��ȡ�ļ����Ե�ַ 
	printf("����ɹ�����鿴�ļ�������Ŀ¼Ϊ:%s\\%s\n",buffer,a);
	fclose(pFile); 
	system("pause");
	return 0;
} 
