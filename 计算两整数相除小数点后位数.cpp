#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	printf("输入分子：\n");         //分子<分母程序才能正常运行 
	scanf("%d",&a);
	printf("输入分母：\n");
	scanf("%d",&b);
	printf("输入需求小数点后的位数：\n");
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
			a*=10;              //a=a*10 
			for(n=9;n>0;n--)
			{
				if(a>n*b)
				{
					a=a%(n*b);
					break;        //退出最靠近的那个for循环 
				}
			}
		printf("第%3d的小数位为%d\n",i,n);          //%3d作用为对齐数字 
	}
}
