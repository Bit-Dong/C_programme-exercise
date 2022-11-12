#include<stdio.h>
int main()
{
	int i,n=1,s=0;
	for(i=1;i<=20000000;i=2*i)
	{
	s=s+i;	
		if(s<=2345678)
		{
	    printf("i=%d,n=%d,s=%d\n",i,n,s);
		}
		n++;
	}	
 } 
