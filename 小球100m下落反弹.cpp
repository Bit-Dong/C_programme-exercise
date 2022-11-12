#include<stdio.h>
int main()
{
	double i=100,s=100,t=0,n;
	for(n=1;n<=100;n++)
	{
		t=0.5*i;
		s=s+2*t;
		i=t;
		if(n==10)
		{
			printf("n=%f,t=%f,s=%f\n",n,t,s);
		}
	}
}
