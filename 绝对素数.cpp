//姓名：聂冬     学号：2006702-02 
//程序问题：试求所有两位绝对素数的和。
 
#include<stdio.h>              //绝对素数：一个自然数是素数，且它的数字位置经过任意对换后仍为素数，则称为绝对素数
int main()                     //例：13 
{
	int i,j,n=0,z,s=0,k,a,b,m;
	for(i=10;i<=99;i++)
	{
		k=0;
		for(j=2;j<=i-1;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
		  a=i/10;
		  b=i%10;
		  z=b*10+a;
		  for(m=2;m<=z-1;m++)
		  {
		  	if(z%m==0)
		  	{
		  		k=1;break;
			  }
		  }
		  if(k==0)
		  {
		  	n++;s=s+i;printf("z=%d,n=%d,s=%d\n",z,n,s);
			  }	
		}
			
	}
}

