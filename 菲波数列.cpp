//姓名：聂冬      学号：2006702-02 
//程序问题 1，1，2，3，5，         8……的第30个数

#include<stdio.h>                    //菲波数列： 1，1，2，3，5....后一个数=前两个数之和 
int main()
{
	int a=1,b=1,c=0,n=2,i;
	for(i=1;i<=265;i++)
	{			
				c=a+b;
				n=n+1;
				if(n<=30)
				{
					printf("a=%d,b=%d,c=%d,n=%d\n",a,b,c,n);
		    	}
				a=b;
				b=c;
	}
} 
