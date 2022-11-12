//姓名：聂冬    学号：2006702-02 
//程序问题： 求[1, 21]范围内梅森尼数的最大值以及个数与和

#include<stdio.h>         //梅森尼数： 梅森尼数是指能使2^n-1为素数的数n
#include<math.h>
int main()
{
	int i,j,n=0,k,m,s=0;
	for(i=2;i<=21;i++)
	{
		m=pow(2,i)-1;
		k=1;
		for(j=2;j<=m-1;j++)
		{
			if(m%j==0)
			{
				k=0;
				break;
			}
		}
		if(k==1)
		{
			s=s+i;
			n++;
			printf("m=%d,n=%d,s=%d\n",m,n,s);
		}
	}
}
