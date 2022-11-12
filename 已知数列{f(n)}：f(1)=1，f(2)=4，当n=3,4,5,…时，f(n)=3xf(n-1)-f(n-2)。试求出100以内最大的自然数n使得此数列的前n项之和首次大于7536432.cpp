#include<stdio.h>
int main()
{
	int a=1,b=4,c,n,s=5;    
	for(n=3;n<=100;n++)
	{
		c=3*b-a;
		s=s+c;
		printf("a=%d,b=%d,c=%d,n=%d,s=%d\n",a,b,c,n,s);
		a=b;
		b=c;
		if(s>7536432)
		{
			break;
		}
	}
	printf("n=%d\n",n);
}
