#include<stdio.h>
int main()
{
	int a,b,c,i,s=0,sum=0;
	for(i=100;i<=200;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a==c)
		{
			s=s+1;
			sum=sum+i;
			printf("i=%d,s=%d,sum=%d\n",i,s,sum);
		}
	}
	printf("s=%d,sum=%d\n",s,sum);
}
