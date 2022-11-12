//姓名：聂冬    学号：2006702-02 
//程序问题：求1-200内非素数非偶数
 
#include<stdio.h>
int main()
{
	int i,n=0,s=0,j;
	for(i=1;i<=200;i=i+2)
	{
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				n++;
				s=s+i;
				printf("i=%d,j=%d,n=%d,s=%d\n",i,j,n,s);
				break;
			}
		}
	    
	}
} 
