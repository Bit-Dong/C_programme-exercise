#include<stdio.h>
int main()
{
    long long int a[100000]={0},b,c,d,n;
	a[0]=1;
	printf("please ‰»ÎΩ◊≥Àn£∫");
	scanf("%d",&n); 
	for(b=1;b<=n;b++)
	{
		for(c=0;c<100000;c++)
		{
			a[c]=a[c]*b;
		}
		for(c=0;c<100000;c++)
		{
			if(a[c]>9)
			{
				a[c+1]=a[c+1]+a[c]/10;
				a[c]=a[c]%10;
			} 
		}
	}
	for(d=99999;d>=0;d--)
	{

		printf("%lld",a[d]);
	}
}
