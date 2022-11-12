#include<stdio.h>
int main()
{
	int a=0,b=0,c=1,s=0,n;
	for(n=4;n<=36;n++)
	{
	s=a+b+c;
	printf("a=%d,b=%d,c=%d,s=%d,n=%d\n",a,b,c,s,n);
	a=b;
	b=c;
	c=s;
	}
	if(n==36)
		printf("s=%d\n",s);
}



