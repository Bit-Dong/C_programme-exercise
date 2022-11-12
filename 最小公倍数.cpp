#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("输入两个整数求它们的最小公倍数 ");
	scanf("%d%d",&a,&b); 
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	d=b;
	printf("重复输入上面两个数 ");
	scanf("%d%d",&a,&b);
	e=a*b/d;
	printf("最小公倍数=%d\n",e); 
}
