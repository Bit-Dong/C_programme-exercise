#include<stdio.h>
int main()
{
	int i=98765432,t,n=0;
	while(i!=1)
	{
	if(i%2==0)
	{
		n++;
	    i=i/2;
		printf("i=%d,n=%d\n",i,n);
		
    }
    else
    i=i/2;
    continue;
    }
    
} 
