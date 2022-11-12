#include<stdio.h>
int main()
{
	float r,l,s;
	scanf("%f",&r);        //输入一个浮点数据，存放地址&r 
	l=2*3.14159*r;        // 计算周长，赋值给l 
	s=3.14159*r*r;        //计算面积，赋值给s 
	printf("\n l=%8.4f",l);     //输出周长，数据共占8个字符宽，4位小数 
	printf("\n s=%8.4f",s);     //输出面积，数据共占8个字符宽，4位小数 
	return 0;
}
