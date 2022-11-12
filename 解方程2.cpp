//姓名：聂冬    学号：2006702-02 
//程序问题：求方程X^3-2X-5=0在区间[1.5,2.5]上的一个实根。 要求：按四舍五入的方式精确到小数点后第二位
 
#include<stdio.h>
#include<math.h>
int main()
{
	double x,t,v,n=1,min=1;
	for(x=1.5;x<=2.5;x=x+0.001)
	{
		v=x*x*x-2*x-5;
		t=fabs(v);
		if(n>t)
		{
			//printf("x=%.2f,t=%.2f\n",x,t);
			if(t<min)
			{
				min=t;
				printf("t=%.2f,x=%.2f\n",t,x);
			}
			
		}
	}
	
}
