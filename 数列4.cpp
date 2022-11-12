//姓名：聂冬    学号：2006702-02 
//程序问题：求s=1+(1+3)+(1+3+5)+…+(1+3+5+7+…+99)的值
 
#include<stdio.h>
int main()
{
	int n,i,t=0,s=0;
	for(n=1;n<=99;n=n+2)
	{
		t=t+n;
		s=s+t;
		printf("s=%d\n",s);
	}
}
