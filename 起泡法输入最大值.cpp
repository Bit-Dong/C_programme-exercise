#include<stdio.h>
int main()
{
	int i,t,a[10];
	printf("input ten number compare \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(i<10)
	{
		if(a[i]>a[i+1])
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
		i++;
	}
	printf("%d\n",a[i]);
}
