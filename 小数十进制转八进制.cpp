#include<stdio.h>
int main()
{
	double i=0.56789,n,t,m=0;
	for(n=1;n<=18;n++)
	{
		t=int(i*8);
		i=(i*8)-t;
		if(t==3)
		{
			m++;
		}
	}
	printf("m=%f",m);
}
