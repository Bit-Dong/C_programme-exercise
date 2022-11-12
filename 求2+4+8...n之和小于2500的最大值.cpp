#include<stdio.h>
int main()
{
	int i,s=0;
	for(i=2;i<=10000;i=2*i)
	{
		s=s+i;
		if(s<=2500)
		{
			printf("i=%d,s=%d\n",i,s);
		}
		else
		break;
		printf("s=%d\n\n",s);
	}
	
}
