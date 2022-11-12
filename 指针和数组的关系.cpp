#include<stdio.h>
int main()
{
	int a[10],*p,i;
	p=&a[0];//p=a;也可以
	for(i=0;i<=9;i++)
	{
		a[i]=i;
		printf("%5d  ",a[i]);   //数组的数据 
		printf("%5d  ",&a[i]);  //输出数组地址 
		printf("%5d  ",p[i]);   //指针指向数组的数据 
		printf("%5d  ",&p[i]);  //指针指向数组的地址 
		printf("%5d  ",p+i);    //指针指向数组的地址 
		printf("%5d  ",*p+i);   //指针指向数组的数据 
		printf("%5d  ",&p+i);   //指针自己的地址 
		printf("\n"); 
	 } 
}
