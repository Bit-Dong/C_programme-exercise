#include<stdio.h>
int main()
{
	struct Student                    //声明结构体类型 struct Student 
	{
		int num;
		char name[20];
		float score;
		long long int tell; 
	}
	student1,student2;            //定义两个结构体变量 student1，student2 
	scanf("%d%s%f%lld",&student1.num,student1.name,&student1.score,&student1.tell);       //输入学生1数据 
	scanf("%d%s%f%lld",&student2.num,student2.name,&student2.score,&student2.tell);       //输入学生2数据 
	printf("The hight score is :\n");
	if(student1.score>student2.score)
	printf("%d %s %6.2f %lld\n",student1.num,student1.name,student1.score,student1.tell);
	else if(student1.score<student2.score)
	printf("%d %s %6.2f %lld\n",student2.num,student2.name,student2.score,student2.tell);
	else
	{
		printf("%d %s %6.2f %lld\n",student1.num,student1.name,student1.score,student1.tell);
		printf("%d %s %6.2f %lld\n",student2.num,student2.name,student2.score,student2.tell);
	}
	return 0;
}
