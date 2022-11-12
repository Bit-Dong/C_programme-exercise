#include<stdio.h>
int main()
{
	int i=1,n=1;
	while(i<6000)
	{
	i=i+n;
	n++;
	if(i<=6000)
	printf("i=%d,n=%d\n",i,n);
    }
}
