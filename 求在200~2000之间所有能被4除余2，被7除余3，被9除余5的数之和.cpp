#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=200;i<=2000;i++)
	if(i%4==2&&i%7==3&&i%9==5)
	{
		s=s+i;
		printf("i=%d,s=%d\n",i,s);
	}
	printf("s=%d",s);
}
