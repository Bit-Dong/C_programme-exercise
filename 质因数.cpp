#include<stdio.h>            //质因子：能被给定正整数整除的质数 
int main()
{
	int i,k=2,n=0;
	printf("请输入正整数（求其质因数）：");
	scanf("%d",&i);
	while(k<=i)
	{
		if(i%k==0)
		{
			n++;
			printf("k=%d,n=%d\n",k,n);
			i=i/k;
			continue;
		}
		k++;
	 } 
}
