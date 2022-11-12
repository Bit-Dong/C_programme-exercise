#include<stdio.h>
#include<math.h>          //为了使用求平方根函数sqrt() 
int main()
{
	float a,b,c,disc,x1,x2;
	printf("input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);       //输入方程的三个系数的值 
	disc=b*b-4*a*c;           //求判别式的值赋给disc 
	x1=(-b+sqrt(disc))/(2*a);        //求方程的根 
	x2=(-b-sqrt(disc))/(2*a);
	printf("\nx1=%6.2f\nx2=%6.2f\n",x1,x2);
	return 0;
 } 
