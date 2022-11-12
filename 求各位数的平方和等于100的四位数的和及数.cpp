#include<stdio.h>
int main()
{
	int a,b,c,d,i,s=0,n=0;
	for(i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
	if(a*a+b*b+c*c+d*d==100)
	{s=s+1;
	n=n+i;
	}}
	printf("s=%d,n=%d\n",s,n);
	return 0;
 } 
