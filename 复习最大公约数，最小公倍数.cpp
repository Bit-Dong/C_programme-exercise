#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,n=0;
	printf("输入两个整数：");
	scanf("%d%d",&a,&b);
	d=a;e=b;
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	f=d*e/b;
	printf("该两数的最大公约数为%d,最小公倍数为%d\n",b,f);
	
 } 
