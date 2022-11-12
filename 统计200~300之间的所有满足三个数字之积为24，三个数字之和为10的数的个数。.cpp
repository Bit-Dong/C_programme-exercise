#include<stdio.h>
int main()
{
	int i,a,b,c,s=0;
	for(i=200;i<=300;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a*b*c==24&&a+b+c==10)
		{
		s=s+1;
		printf("i=%d,s=%d\n",i,s);
	    }
	}
	printf("s=%d\n",s);
}
