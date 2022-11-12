#include<stdio.h>
int main()
{
	int a,b,c,i,s=0;
	for(i=123;i<=789;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a==b||a==c||b==c||a==b&&b==c)
		{
		s=s+1;
		printf("i=%d,s=%d\n",i,s);
	    }
	}
	printf("s=%d\n",s);
}
