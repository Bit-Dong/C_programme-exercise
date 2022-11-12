#include<stdio.h>                 //多因子完数：若某整数n的所有因子之和是n的倍数，则称 n 为多因子完备数 
int main()                        //例：如28，其所有因子之和为56 
{
	int i,j,n=0;
	for(i=1;i<=500;i++)
	{
	   int  s=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				s=s+j;
			}
		}
		if(s%i==0)
		{
			n++;
			printf("i=%d,j=%d,s=%d,n=%d\n",i,j,s,n); 
		}
	}
 } 
