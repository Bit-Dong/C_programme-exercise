//姓名：聂冬     学号：2006702-02 
//程序问题 ：设a=234，b=569，求a/b的精确值中小数点后前40位数字中数字3的个数。
 
#include<stdio.h>
int main()
{
	int a=234,b=569,n=0,n1,i,i1;
	for(i=1;i<=40;i++)
	{
		a=a*10;
		for(n1=9;n1>=1;n1--)
		{
			if(a>b*n1)
			{
			a=a%(b*n1);
			if(n1==3)
				{
					n++;
				printf("n=%d\n",n);
			   }
		    }
		}	
	}
 } 
