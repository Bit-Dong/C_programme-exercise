#include<stdio.h>
int main()
{
	int a,i,j,s=0;
	for(i=100;i<=200;i++)
	{
		a=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				a=1;
				break;
			}
		} 
			if(a==0)
			{ 
			s=s+1;
			if(s==10)
			printf("s=%d,i=%d\n",s,i);
		    } 
	}
}
