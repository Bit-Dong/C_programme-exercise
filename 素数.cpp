#include<stdio.h>              //素数：仅能被1和它本身整除的数 
int main()                      
{
	int i,j,n=0,s=0,k,a,b;
	for(i=10;i<=99;i++)
	{
		k=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			a=i,b=j;
			i=b;j=a;
			if(i%j!=0)
			{
			n++;
			s=s+i;
			printf("i=%d,n=%d,s=%d\n",i,n,s);
		    }
		}
	}
}
