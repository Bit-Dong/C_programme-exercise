#include<stdio.h>
int main()
{
	int i;
	double s=0;
	for(i=1;i<=100;i=i+2)
	{
		s=s+(1.0/i-1.0/(i+1));
		if(s<=0.68)
		{
			printf("i=%d,s=%f\n",i,s);
		}	printf("i=%d\n",i);
	}

}
