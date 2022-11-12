#include<stdio.h>
int main()
{
	int n=1;
	float a,sum=100.0,i=100.0;
	for(n=1;n<100;n++)
	{
		a=0.75*i;
		sum=sum+2*a;
		i=a;
		if(sum>678.0)
		{
			break;
		}
	}
	n++;
	printf("%d\n",n);
}
