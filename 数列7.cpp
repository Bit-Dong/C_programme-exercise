#include<stdio.h>
int main()
{
	int i=1,t,s=0,n;
	for(n=1;n<=99;n++)
	{
		t=i+n;
		i=t;
		if(i%4==0)
		{
			s=s+i;
		}
	}
	printf("s=%d",s);
}
