//姓名：聂冬  学号：2006702-02 
//程序问题：1+2+3+。。。+n
 
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("1+2+3+...+%d=%d\n",i-1,sum);
	return 0;
 } 
