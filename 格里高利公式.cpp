//姓名：聂冬    学号：2006702-02 
//程序问题：α/4=1-1/3+1/5-1/7+1/9-1/11+…-1/99，求α的值     要求：按四舍五入的方式精确到小数点后第二位

#include<stdio.h>
#include<math.h>
int main()
{
	double i,n,s=0,a,b;
	for(n=1;n<=50;n++)
	{
		a=pow(-1,n+1);
		i=a*(1/(2*n-1));
		s=s+i;
	}
	b=4*s;
	printf("b=%.2f\n",b);
}
