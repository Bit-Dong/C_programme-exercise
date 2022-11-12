#include<stdio.h>
int main()
{
	int i,n=0,s=0,a,b,c;
	for(i=100;i<=900;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a==c)
		{
			n++;
			s=s+i;
			printf("i=%d,n=%d,s=%d\n",i,n,s);
		}
	}
}
