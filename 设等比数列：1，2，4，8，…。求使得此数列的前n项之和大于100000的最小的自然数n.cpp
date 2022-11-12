#include<stdio.h>
int main()
{
	int i,n=1,s=0;
	for(i=1;i<=200000;i=2*i)
	{
		s=s+i;
		printf("i=%d,n=%d,s=%d\n",i,n,s);
		if(s>=100000)
		{
	    printf("i=%d,n=%d,s=%d\n",i,n,s);
		}
		n++;
	}	
 } 
