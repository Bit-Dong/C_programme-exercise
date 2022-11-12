//姓名：聂冬   学号：2006702-02 
//程序问题：对于分数的分母取值范围为 [50, 90] 时的最简真分数共有多少个? 
 
#include<stdio.h>                       //最简真分数：分子分母为正整数，分子小于分母且分子分母无公因数的分数称为最简真分数 
int main()
{
	int a,b,c,n=0,flag;    //a为分子；b为分母 
    for(b=50;b<=90;b++)	
	{	
		for(a=2;a<=b-1;a++)
		{
	    	flag=1;
			for(c=2;c<=a;c++)
			{ 
				if(a%c==0&&b%c==0)
				{
					flag=c;
					break;               //k=0则有公约数 
				}
			}
			if(flag==1)
			{
				n++;printf("a=%d,b=%d,n=%d\n",a,b,n);
			}
    	}
	}
	
}
