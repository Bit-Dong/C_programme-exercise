#include<stdio.h>
int main()
{
	int i,t,n=0,s;
	for(i=200;i<=500;i++)
	{
		s=0;
		for(t=1;t<i;t++)
		{
			if(i%t==0)
			{
				s=s+t;
				continue;
			}
		}
		if(s==i)
		{
			n++;
			printf("i=%d,n=%d\n",i,n);
		}
	} 
} 
