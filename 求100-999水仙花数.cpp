#include<stdio.h>
int main()
{
	int a,b,c,i,s=0;
	for(i=100;i<=2000;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		if(a*a*a+b*b*b+c*c*c==i)
		
		s=s+1;
		 
	}
	printf("%d\n",s);
	return 0;
}
