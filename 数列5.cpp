//姓名：聂冬      学号：2006702-02 
//程序问题：求出100以内最小的自然数 n，使得从1开始的连续 n个自然数的倒数之和大于3.6
 
#include<stdio.h>
int main()
{
	double n,i,s=0;
	for(n=1;n<=100;n++)
	{
		i=1/n;
		s=s+i;
		if(s>3.6)
		{
			break;
		}
	}
	printf("n=%f,s=%f\n",n,s);
}
