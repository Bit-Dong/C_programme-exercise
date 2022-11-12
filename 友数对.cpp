//姓名：聂冬     学号;2006702-02 
//程序问题：求[2，49]之间有多少友数对。
 
#include<stdio.h>                       //友数对：若两个连续的自然数的乘积减 1 后是素数，则称这两个连续自然数为友数对 
int main()
{
	int i,j,n=0,s=0,k,flog;
	for(i=2;i<=49;i++)
	{
		k=i*(i+1)-1;
		flog=1;
		for(j=2;j<=i-1;j++)
		{
			if(k%j==0)
			{
				flog=0;
				break;
			}
		}
		if(flog==1)
		{
			n++;
			s=s+k;
			printf("k=%d,n=%d,s=%d\n",k,n,s);
		}
	}
}
