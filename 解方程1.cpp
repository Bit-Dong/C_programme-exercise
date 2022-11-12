//姓名：聂冬   学号：2006702-02 
//程序问题：求方程9x+4y=2000的所有正整数解的|x-y|的最小值
 
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z,min=10000;
	for(x=0;x<=300;x++)
	{
		for(y=0;y<=500;y++)
		{
			if(9*x+4*y==2000)
			{
				z=fabs(x-y);
				if(z<min)
				{
					min=z;
					printf("min=%d\n",min);
				}
			}
		}
	}
}
