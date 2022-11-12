#include<stdio.h>
#include<math.h>
int main()
{
	float add(float x,float y );     //浮点型：单精度型 
	float a,b,c;
	scanf("%f%f",&a,&b);
	c=add(a,b);
	printf("sum=%5.2f",c);         //%5.2f表示四舍五入 保留两位小数 
}
float add(float x,float y)
{
	float z;
	z=x+y;
	return(z);
}
