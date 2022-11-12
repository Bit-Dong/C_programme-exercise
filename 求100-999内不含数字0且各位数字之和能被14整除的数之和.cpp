#include<stdio.h>
int main()
{
	int a,b,c,i,s=0;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a!=0&&b!=0&&c!=0&&(a+b+c)%14==0)
		{
			s=s+i;
			printf("i=%d,s=%d\n",i,s);
		}
	}
	printf("s=%d\n",s);
}
