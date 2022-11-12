#include<stdio.h>
int main()
{
	float add(float x,float y);    //对被调用函数add函数做声明
	float a,b,c;
	printf("Please enter a and b\n");
	scanf("%f%f",&a,&b);            //输入两个实数 
	c=add(a,b);                    //调用add函数 
	printf("c=%f\n",c);
	return 0;
}
float add(float x,float y)       //定义add函数 
{
	float z;
	z=x+y;
	return(z);                   //把变量z的值作为函数值返回 
}
