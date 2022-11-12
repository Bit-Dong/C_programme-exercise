#include<stdio.h>
int main()
{
	float h=100,s=100,i,n=0;
	while(s<=1000)
	{
		h=(3/4)*h;
		s=s+2*h;
		n++;
		if(s>=678)
		{
			break;
		}
	}
	printf("n=%d\n",n);
}