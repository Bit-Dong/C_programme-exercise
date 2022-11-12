#include<stdio.h>
int main()
{
	int age(int n);
	printf("NO.5 age is %d\n",age(5));
 } 
    int age(int n)
    {
    	int a;
    	if(n==1)
    	a=10;
    	else
    	a=age(n-1)+2;
    	return a;
	}
