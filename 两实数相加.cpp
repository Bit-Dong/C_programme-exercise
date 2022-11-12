#include<stdio.h>
int main()
{
	float add(float x,float y);
	float a,b,c;
	printf("enter two number xiao jia :");
	scanf("%f%f",&a,&b);
	c=add(a,b);
	printf("sum=%f\n",c);
}
    float add(float x,float y)
    {
    	float z;
    	z=x+y;
    	return z;
	}
