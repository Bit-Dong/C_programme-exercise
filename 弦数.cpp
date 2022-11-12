#include<stdio.h>           //弦数：对自然数A、B、C，若A<B<C且A*A+B*B=C*C，则称{A,B,C}为一组勾股弦数，其中A、B、C分别称为勾、股、弦 
int main()
{
	int a,b,c,i=0;
    for(c=100;c<=300;c++)
	{
		for(a=1;a<=c;a++)
		{
			for(b=a+1;b<=c;b++)
			{
			if(a*a+b*b==c*c)
			{
				i++;
				printf("a=%d,b=%d,c=%d,i=%d\n",a,b,c,i);
			}
	    	}
		}
	}
}
