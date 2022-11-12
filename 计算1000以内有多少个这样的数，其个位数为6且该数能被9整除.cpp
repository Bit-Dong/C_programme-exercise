#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=1;i<=1000;i++)
	{
		if(i%10==6&&i%9==0)
		{
			s=s+1;
			printf("i=%d,s=%d\n",i,s);
		}
	}
	printf("s=%d\n",s);
}
