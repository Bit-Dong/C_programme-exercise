#include<stdio.h>
int main()
{
	int a,b,c;
	printf("输入两个整数求它们的最大公约数");
	scanf("%d%d",&a,&b); 
	while(a%b!=0)
	{
		c=a%b;
		a=b;
		b=c;
	}
	printf("最大公约数=%d\n",b);
}
