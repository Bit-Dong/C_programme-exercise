//姓名：聂冬  学号：2006702-02 
//程序问题：100-200素数 
 
#include<stdio.h>
int main()
{
	int a,i,j,s=0,sum;
	for(i=100;i<=200;i++)
	{
		a=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				a=1;
				break;
			}
		} 
			if(a==0)
     	{ 
			s=s+1;
			sum=sum+i;
			printf("i=%d,s=%d,sum=%d\n",i,s,sum);
		} 
	}
	printf("s=%d,sum=%d\n",s,sum);
}
