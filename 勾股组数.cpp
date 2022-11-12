#include<stdio.h>                       //勾股数：A^2+B^2=C^2 (假定A<B<C)的一组正整数（A，B，C） 
int main()                              //例：3^2+4^2=5^2 
{
	int a,b,c,n,i=0;
    printf("输入1-n内中的勾股数  n=");
	scanf("%d",&n);
	 
	for(a=1;a<=n;a++)
	{
		for(b=a+1;b<=n;b++)
		{
			for(c=b+1;c<=n;c++)
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
