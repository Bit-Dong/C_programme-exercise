//姓名：聂冬    学号：2006702-02 
//程序问题：求出将十进制小数0.987654321等值转换为二进制形式表示后前25位小数中数字0的个数。（提示：使用“2乘取整”法）
 
#include<stdio.h>
int main()
{
	double x=0.987654321,n=0,k,z;
	for(k=1;k<=25;k++)
	{
	    x=x*2;
	    z=int(x);
	    x=x-z;
	    if(z==0)
	    {
	    	n++;
	    	printf("n=%f\n",n);
		}
	}
 } 
