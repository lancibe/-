/*学生管理系统*/ 
/*制作人：张毅迅*/
/*联系方式：QQ：1609547089*/
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
	char a[30];//自定义文件名 
	printf("请输入文件名\n");
	scanf("%s",a);
	strcat(a,".csv");
	
	
	int n;
	printf("请输入学生人数\n");
	scanf("%d",&n);
	struct Stu str[n];
	min = n-1;
	
	
	FILE *pFile = fopen(a,"w");
	printf("使用方法：同一行的不同数据之间用空格键分开\n下一行使用回车键来换行\n");
	printf("请输入数据(姓名 学号 成绩)：\n");
	
	
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
	
	
	fprintf(pFile, "姓名,学号,成绩\n");
	for(i = 0 ; i < n ; i++)
	{
		fprintf(pFile,"%s,'%s,%d\n",str[i].name,str[i].num,str[i].grade);	
	} 
	fputs("\n",pFile);
	fprintf(pFile,",,average=%.2f\n",ave);
	fprintf(pFile,"%s,'%s,%d\n",str[max].name,str[max].num,str[max].grade);
	fprintf(pFile,"%s,'%s,%d\n",str[min].name,str[min].num,str[min].grade);

	
	char* buffer = getcwd(NULL,0);//读取文件绝对地址 
	printf("输入成功，请查看文件，保存目录为:%s\\%s\n",buffer,a);
	fclose(pFile); 
	system("pause");
	return 0;
} 
