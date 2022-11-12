#include<stdio.h>
int main()
{
	double i=1.0;
	int n=2000;
	while(i<=2)
	{
		i=i*1.03;
		n++;
		if(i>=2.0)
		{
			printf("i=%f,n=%d\n",i,n);
		}
	}
	
}
