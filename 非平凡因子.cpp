#include<stdio.h>            //非平凡因子：除1和它本身以外的约数
int main()
{
	int i=559399,n;
	for(n=2;n<i;n++)
	{
		if(i%n==0)
	    printf("n=%d\n",n);		
	}	
}
