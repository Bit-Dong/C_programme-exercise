//姓名：聂冬     学号：2006702-02 
//程序问题：大马、小马和马驹共100匹，大马一驮三，小马一驮二，马驹二驮一，共100片瓦一次驮完，三种马都要驮，共有多少种组合
 
#include<stdio.h>
int main()
{
	int a,b,c,n=0;
	for(a=1;a<=100;a++)
	{
		for(b=1;b<=100;b++)
		{
			for(c=1;c<=100;c++)
			{
				if(6*a+4*b+c==200&&a+b+c==100)
				{
					n++;
					printf("a=%d,b=%d,c=%d,n=%d\n",a,b,c,n);
				}
			}
		}
	}
}
