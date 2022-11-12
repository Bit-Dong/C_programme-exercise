#include<stdio.h>
int main()
{
	int i;
	double s=0.0,j=1.0;
	for(i=1;i<=100;i++)
	{
		j=j*i;
		s=s+1.0/j;
		if(s>1.71828)
		{
			break;
		}
		printf("i=%d,s=%f\n",i,s);
	}
	printf("i=%d\n",i);
}