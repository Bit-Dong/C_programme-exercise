#include<stdio.h>
int main()
{
	int i,s=0,n=1;
		for(i=102;i<=200;i+=2)
		{
			s=s+i;
			n=n+1;
			if(s<=2000)
			{
				printf("i=%d,s=%d,n=%d\n",i,s,n);
			}
		}
	printf("n=%d\n",n);
}
