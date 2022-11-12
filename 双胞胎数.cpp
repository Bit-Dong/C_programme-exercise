//姓名：聂冬      学号：2006702-02 
//程序问题：求[200, 1000]内双胞胎数的对数与最大一对双胞胎数的和
 
#include<stdio.h>          //双胞胎数：若两个素数之差为2，则称这两个素数为双胞胎数           
int main()                      
{
	int i,j,k,n=0,s=0,a,b,c,e,f;
	for(i=200;i<=1000;i++)
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
			for(a=200;a<=1000;a++)
			{
				c=0;
				for(b=2;b<=a-1;b++)
				{
					if(a%b==0)
					{
						c=1;
						break;
					}
				}
				if(c==0&&a-i==2)
				{
					n++;
					printf("a=%d,i=%d,n=%d\n",a,i,n);
				}
			}
		}
	}
	printf("输入上述运行成功的最大的一对数 ");
	scanf("%d%d",&e,&f);
	s=s+e+f;;
	printf("最大一对双胞胎数的和=%d\n",s);
}
