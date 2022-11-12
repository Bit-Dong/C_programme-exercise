#include<stdio.h>
int main()
{
	int i,s=0,n=1;
	for(i=1;i<=100;i++)
	{
		n++;
		s=s+i*(i+1);
		if(s<=5000)
		{
			printf("i=%d,s=%d\n",i,s);
		}
	}
	printf("n=%d\n",n);
}
