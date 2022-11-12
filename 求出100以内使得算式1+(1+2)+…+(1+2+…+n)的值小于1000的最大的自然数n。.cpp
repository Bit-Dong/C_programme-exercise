#include<stdio.h>
int main()
{
	int i=1;
	double s=0,t=1;
	while(s<=1.71828)
	{
		t=1.0/(t*i);
		s=s+t;
		
		if(s>1.71828)
		{
			printf("i=%d,s=%f\n",i,s);
		}
		i=i+1;
	}
	
	
}
