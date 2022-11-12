#include<stdio.h>
int main()
{
	int i=1;
	double s=0.0;
	while(i<=100)
	{
		s=s+1.0/(i*i);
		if(s<=1.6)
		{
		printf("i=%d,s=%f\n",i,s);
	}
		i++;
	}
	
}
