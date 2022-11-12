#include<stdio.h>
int main()
{
	int i=1;
	int sum=0;
	while(i<=100)
	
	{
		sum=sum+i*i;
		
		if(sum<5000)
		printf("i=%d,sum=%d\n",i,sum);
		
		else
		    break;
		i=i+1;
	  
	}
	i=i-1;
	printf("i=%d\n",i);
}
