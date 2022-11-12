#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=10;i<=1000;i++)
	{
		if(i%7==0||i%9==0)
		{ 
		s=s+1;
		printf("i=%d,s=%d\n",i,s);
		} 
	}
	printf("s=%d\n",s);
}
