//姓名：聂冬      学号：2006702-02 
//程序问题：求出最大的自然数n，使得从1开始的连续n个自然数的平方和小于8000
 
#include<stdio.h>
int main()
{
	int n,i,s;
	for(n=1;n<=520;n++)
	{
		i=n*n;
		s=s+i;
		if(s<=8000)
		printf("n=%d,s=%d\n",n,s);
	}
 } 
