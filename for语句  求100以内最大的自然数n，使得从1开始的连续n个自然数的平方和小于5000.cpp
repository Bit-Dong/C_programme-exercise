#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=1;i<=100;i++)
	{
	s=s+i*i;
	if(s<5000)
	printf("i=%d,s=%d\n",i,s);
	else
	break;
    }
	i=i-1; 
    printf("i=%d\n",i);
}
