#include<stdio.h>
int main()
{
	int a,b,c,d,n,i;
	int huiwenshu(int i);
	for(i=1000;i<=9999;i++)
	{
		n=huiwenshu(i);
	}
	printf("%d",n);
 } 
 int huiwenshu(int i)
 {
    int a,b,c,d,n=0;
    for(i=1000;i<=9999;i++)
    {
 		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
		if(a==d&&b==c)
		{
			n++;
		}
	}
		return n;	
 }
 
