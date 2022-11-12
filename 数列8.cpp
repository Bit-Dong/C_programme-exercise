#include<stdio.h>
int main()
{
	int a=1,b=1,c,s=0,n;
	for(n=3;n<=25;n++)
	{
		c=a+b;
		a=b;
		b=c;
		if(n>=15)
		{
			s=s+c;
		}
	}
		printf("s=%d",s);
}
