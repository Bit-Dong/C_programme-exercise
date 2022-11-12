#include<stdio.h>
int main()
{
	int a,b,s,min=1000;
	for(a=1;a<=200;a++)
	{
		for(b=1;b<=200;b++)
		{
			if(a*b==200)
			{
				s=a+b;
				if(s<min)
				{
					min=s;
					printf("a=%d,b=%d,min=%d\n",a,b,min);
				}
			}
		}
	}
	printf("min=%d\n",min);
}