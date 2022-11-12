#include<stdio.h>
int main()
{
	int a[1000]={0},b,c,d,n;
	a[0]=1;
	printf("please输入要求2的n次幂中的n=");
	scanf("%d",&n);
	printf("\n"); 
	for(b=0;b<n;b++)
	{
		for(c=0;c<1000;c++)
		{
			a[c]*=2;
		}
			for(c=0;c<1000;c++)
			{
				if(a[c]>10)
				{
					a[c+1]=a[c+1]+a[c]/10000;
	                a[c]=a[c]%10000;
				}
			}
	}
	printf("2的%d次幂=",n);
	for(d=999;d>=0;d--)
	{
		if(a[d]>0)
	    printf("%d",a[d]);
    }
	return 0;
}
