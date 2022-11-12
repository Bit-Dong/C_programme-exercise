#include<stdio.h>               //输入十个数，输出最大值 
int main()
{
	int a[10],i,max=0;
	printf("input ten number compare maximum");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("%d",a[i]);
}
