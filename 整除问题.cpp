#include<stdio.h>
int main()
{
	int i,n=0,s=0;
	for(i=1;i<=500;i++)
	{
		if((i%3==0||i%7==0)&&i%2!=0&&i%5!=0)
		{
			n++;
			s=s+i;
			printf("i=%d,n=%d,s=%d\n",i,n,s);
		}
	}
}
