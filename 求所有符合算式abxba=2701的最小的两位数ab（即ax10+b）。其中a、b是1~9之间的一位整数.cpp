#include<stdio.h>
int main()
{
	int a,b,q,min=1000;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
			if((a*10+b)*(b*10+a)==2701)
			{
				q=a*10+b;
				if(q<min)
				{
					min=q;
					printf("min=%d\n",min);
				}
			}
		}
	}
}
