#include<stdio.h>
int main()
{
	int a,b,c,n1=0,n2=0,max=0,min=1000;
	for(a=1;a<=100;a++)
	{
		for(b=1;b<=50;b++)
		{
			for(c=1;c<=20;c++)
			{
				if(a+2*b+5*c==100)
				{
					n1=a+b+c;
					n2=a+b+c;
					if(n1>max)
					{
						max=n1;
					}
					if(n2<min)
					{
						min=n2;
					}
				}
			}
		}
	}
	printf("%d\n",max-min);
 } 
