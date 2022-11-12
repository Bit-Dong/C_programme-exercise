#include<stdio.h>
int main()
{
	double sum=0.0;
	int i=1;
	while(i<=100)
	{
		sum=sum+1.0/i;
		if(sum<3.5)
		printf("i=%d,sum=%f\n",i,sum);
	else
		break;
		i=i+1;
	}
	printf("\n\n\ni=%d;sum=%f\n",i,sum);
 } 
