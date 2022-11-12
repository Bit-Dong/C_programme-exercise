#include<stdio.h>             //完数：一个正整数如果恰好等于其所有真因子之和，则称这个数为“完数”，（整数n的真因子是指除n以外的所有能整除n的数 ） 
int main()                    //例：28的真因子有：1、2、4、7、14 
{
	int i,j,n=0,sum=0;
	for(i=2;i<=1000;i++)
	{
	   int  s=0;
		for(j=1;j<=i-1;j++)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		}
		if(s==i)
		{
			n++;
			sum=sum+i;
			printf("i=%d,j=%d,s=%d,n=%d,sum=%d\n",i,j,s,n,sum); 
		}
	}
 } 
