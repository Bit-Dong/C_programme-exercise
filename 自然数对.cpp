//姓名：聂冬    学号：2006702-02 
//程序问题：若两个自然数A,B的和与差（去绝对值）都是平方数，则称(A,B)为自然数对。若自然数对(A,B)满足下列条件：
//           ①A>B; ②(A,B)与(B,A)视为同一个自然数对；求[1，100] 自然数对的对数以及这些自然数对中所有A之和，所有B之和

#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f,n=0,s1=0,s2=0;
	for(b=1;b<=100;b++)
	{
		for(a=b+1;a<=100;a++)
		{
			c=a+b;
			d=a-b;
			e=sqrt(c);
			f=sqrt(d);
			if(e*e==c&&f*f==d)
			{
				n++;
				s1=s1+a;
				s2=s2+b;
				printf("a=%d,b=%d,n=%d,s1=%d,s2=%d\n",a,b,n,s1,s2);
			}
		}
	}
}
