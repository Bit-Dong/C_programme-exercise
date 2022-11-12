#include<stdio.h>
struct Date
{
	int month;
	int day;
	int year;
}Date1,Date2,Date3,Date4;
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
	long long int tell;
}Student1,Student2,Student3,Student4;
int main()
{
    scanf("%d %d %d %d %s %c %d %lld",&Date1.month,&Date1.day,&Date1.year,&Student1.num,Student1.name,&Student1.sex,&Student1.age,&Student1.tell);
   /* printf("%d\n",Date1.month);
	printf("%d\n",Date1.day);
	printf("%d\n",Date1.year);
	printf("%d\n",Student1.num);
	printf("%s\n",Student1.name);
	printf("%c\n",Student1.sex);
	printf("%d\n",Student1.age);
	printf("%lld\n",Student1.tell);*/
	 printf("%d %d %d %d %s %c %d %lld",Date1.month,Date1.day,Date1.year,Student1.num,Student1.name,Student1.sex,Student1.age,Student1.tell);
} 
