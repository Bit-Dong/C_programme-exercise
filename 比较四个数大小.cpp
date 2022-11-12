#include<stdio.h>
int main()
{
	int max1(int x,int y,int m,int n);
	int a,b,c,d,max;
	printf("enter four number compare :");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	max=max1(a,b,c,d);
	printf("max=%d\n",max);
}
    int max1(int x,int y,int m,int n)
    {
    	int max2(int x,int y); 
    	int t;
    	t=max2(x,y);
    	t=max2(t,m);
    	t=max2(t,n);
    	return t;
	}
	int max2(int x,int y)
	{
		int q;
		q=x>y?x:y;
		return q;
	}
