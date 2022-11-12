#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=1;i<=2000;i++)
	{
		if(i%9==0)
		s=s+i;
		if(s<=500)
		{
			printf("i=%d,s=%d\n",i,s);
		}
		else
		break;
	}
	printf("s=%d\n",s);
}
