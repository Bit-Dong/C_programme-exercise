#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=1;i<=100;i++)
	{
	
	s=s+i*i*i;
	if(s<=88888)
	printf("i=%d,s=%d\n",i,s);
	else
	break;
    } 
    printf("i=%d\n",i);
}
