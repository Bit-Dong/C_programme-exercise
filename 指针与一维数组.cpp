#include<stdio.h>
int main()
{
	int i,a[10],*p=a; 
	printf("enter ten number:\n");
	for(i=0;i<10;i++)
		scanf("%d",p++);
	p=a;
	for(i=0;i<10;i++,p++) 
		printf("%2d",*p);
}
