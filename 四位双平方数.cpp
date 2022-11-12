#include<stdio.h>            //四位双平方数： 若一个四位正整数是另一个正整数的平方，且各位数字的和是一个平方数，则称该四位正整数是“四位双平方数”。
#include<math.h>             // 例：7396  7396=86*86    
int main()                  //            7+3+9+6=25  25=5*5 
{
	int i,a,b,c,d,e,f,s,sum=0;
	for(i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		d=i%10;
		s=a+b+c+d;
		e=sqrt(i);
		f=sqrt(s);
	if(e*e==i&&f*f==s)
	{
		sum=sum+i;
		printf("i=%d,s=%d,e=%d,f=%d,sum=%d\n",i,s,e,f,sum);
	}
    }
}
