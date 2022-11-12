#include<stdio.h>
int main()
{
	int i,j,t,a[10];
	printf("input ten number compare \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<9;j++)
	for(i=0;i<9;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	}
	for(i=0;i<10;i++) 
	printf("%d ",a[i]);
}
