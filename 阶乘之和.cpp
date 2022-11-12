//姓名：聂冬    学号：2006702-02 
//程序问题：要求在其和大于20000时中止程序运行
 
#include<stdio.h>
int main()
{
	int i=1,n,s=0;
	for(n=1;n<=100;n++)
	{
		i=i*n;
		if(n%2!=0&&s<=20000)
		{
			s=s+i;
			printf("n=%d,i=%d,s=%d\n",n,i,s);
		}
	}
 } 
