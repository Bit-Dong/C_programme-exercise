//姓名：聂冬    学号：2006702-02  
//程序问题：有一个4行5列的数表，位于第m行和第n列交叉处的数的值为m+n。求出此数表中所有数的和
 
#include<stdio.h> 
int main()
{
	int m,n,t,s=0;
	for(m=1;m<=4;m++)
	{
		for(n=1;n<=5;n++)
		{
			t=m+n;
			s=s+t;
			printf("m=%d,n=%d,t=%d,s=%d\n",m,n,t,s);
		}
	}
}
