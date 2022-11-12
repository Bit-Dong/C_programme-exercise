//姓名：聂冬   学号：2006702-02 
//程序问题：1000以内完数
 
#include<stdio.h>
int main()
{
	int i,j,s,n=0;
	for(i=2;i<=1000;i++)
	{
		s=0;
		for(j=1;j<=i-1;j++)
		{
			if(i%j==0)
			{
				s=s+j;
				continue;
			}
		}
		if(s==i)
		{
			n++;
			printf("n=%d,i=%d\n",n,i);
		}
	}
}
