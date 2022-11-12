#include<stdio.h>
int main()
{
	int i,a,c,d,b,s=0;
	for(i=1000;i<=9999;i++)
	{
		a=i/1000;
		b=i/100%10;
		c=i/10%10;
		//d=i/%10;
		if(i%16==0&&i/100%10==8&&(a+b)==(b+c))
		{
			s=s+1;
			printf("i=%d,s=%d\n",i,s);
		}
		
	}
	printf("%d\n",s);
}
