//姓名：聂冬   学号：2006702-02 
//程序问题：求[100,999]之内的所有逆向超级素数的个数及和
 
#include<stdio.h>                             //逆向超级素数：如果一个素数其各位数字均不为0，而且从高位开始依次去掉每位数字后，每次所得仍为素数（1不是素数），则称该数为逆向超级素数
int main()
{
	int i,j,a,b,c,f,n=0,s=0;
	for(i=100;i<=999;i++)
	{
		f=0;a=i%100;b=i%10;c=i/10%10;
	    if(c==0||b==1)
		f=1;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		for(j=2;j<=a-1;j++)
		{
			if(a%j==0)
			{
				f=1;
				break;
			}
		}
		for(j=2;j<=b-1;j++)
		{
			if(b%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			n++;
			s=s+i;
			printf("i=%d,n=%d,s=%d\n",i,n,s);
		}
	}
 } 
