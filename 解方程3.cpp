#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,n,min=10000;
	for(x=1;x<=2000;x++)
	{
		for(y=1;y<=2000;y++)
		{
			if(9*x+4*y==2000)
			{
				n=fabs(x-y);
				if(n<min)
				{
					min=n;	printf("x=%d,y=%d,max=%d\n",x,y,min);			
				}
			}
		}
	}
	
} 
