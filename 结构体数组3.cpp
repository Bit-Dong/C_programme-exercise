#include<stdio.h>
struct person
{
	int num;
	char name[20];
	char sex;
	int age;
	long long int tel;
}per[4]={001,"HuChenXi",'g',19,12345,002,"HuShanShan",'g',20,123456,
003,"LiJiaJing",'g',19,123456,004,"HuangFang",'g',19,150};

struct birthday
{
	int month;
	int day;
	int year;
}perB[4]={10,9,2002,04,18,2001,8,25,2002,4,24,2002};

int main()
{
	int i,j;
	for(i=0;i<4;i++)
	{
		printf("%5d %8s %c %5d %5d %5d %5d %lld\n",per[i].num,per[i].name,per[i].sex,per[i].age,perB[i].month,perB[i].day,perB[i].year,per[i].tel);
	}
	return 0;
}

