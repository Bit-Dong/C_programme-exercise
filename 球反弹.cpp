//姓名：聂冬     学号：2006702-02 
//程序问题：一球从100米高处落至平地，并且连续多次再反弹再落下，假设每次反弹的高度都是前一高度的3/4倍，试求出最大的自然数n
//          使得此球从开始下落至第n次着地时在垂直方向所经过的总路程不超过590米。
 
#include<stdio.h>
int main()
{
	double i=100,s=100,n,t;
	for(n=2;n<=250;n++)
	{
		t=0.75*i;
		s=s+2*t;
		i=t;
		if(s<=590)
		{
			printf("n=%f,s=%f\n",n,s);
		}
	}
}
