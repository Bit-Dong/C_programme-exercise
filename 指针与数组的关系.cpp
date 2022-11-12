#include<stdio.h>
int main()
{
	int a[10],*p,i;
	p=&a[0];//p=a;也可以
	printf("数组a:\n");
	for(i=0;i<=9;i++)
	{
		a[i]=i;
		printf("%5d",a[i]);
	} 
	printf("\n");
	printf("数组a的地址：\n");
	for(i=0;i<10;i++)
	{
		printf("%5d ",&a[i]);
	}
	printf("\n");
	printf("指针p指向数组的数据：\n");
	for(i=0;i<10;i++)
	{
		printf("%5d",p[i]);//p[i]=*p+i;
	}
	printf("\n");
	printf("指针p指向数组的地址：\n");
	for(i=0;i<10;i++)
	{
		printf("%5d ",&p[i]); //&p[i]=p+i;
	}
	printf("\n");
	printf("指针自己的地址：\n");
	for(i=0;i<10;i++)
	{
		printf("%5d ",&p+i);
	} 
}
