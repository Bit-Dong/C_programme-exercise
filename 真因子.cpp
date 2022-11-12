#include<stdio.h>             //真因子：小于它本身的约数 
int main()
{
	int i=203267,n;
	for(n=1;n<i;n++)
	{
		if(i%n==0)
		printf("n=%d\n",n);
	}
 } 
