#include<stdio.h>
int main()
{
	double i=1.0;
	int n=1;
	while(i<=2)
	{
		i=i*1.04;
		n++;
		if(i>=2.0)
		{
			n--;
			printf("i=%f,n=%d\n",i,n);
		}
	}
	
}
