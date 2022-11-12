#include<stdio.h>
int main()
{
	int a,b,c,d,n=0;
	for(a=1;a<=4;a++)
	{
		for(b=1;b<=4;b++)
		{
			for(c=1;c<=4;c++)
			{
					if(a!=b&&b!=c&&a!=c)
					{
						n++;
						printf("a=%d,b=%d,c=%d,n=%d\n",a,b,c,n);
					}
			}
		}
	}
}
