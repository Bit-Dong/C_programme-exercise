#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d%d",&a,&b);
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	d=b;
	printf("最大公约数 is %d\n",d);
	scanf("%d%d",&a,&b);
	e=a*b/d;
	printf("最小公倍数 is %d\n",e);
}
