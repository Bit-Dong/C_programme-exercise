#include <stdio.h>
int main()
{
	int n;
	printf("输入想要输出魔方阵的阶数n:");
	scanf("%d",&n);
	int a[n][n],i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		a[i][j]=0;
	}
	a[0][n/2]=1;
	for(k=2;k<=n*n;k++)
	{
		for(i=0;i<n;i++)
	    {
		    for(j=0;j<n;j++)
		    {
		    	if(a[i][j]==k-1)
				break;
			}
			if(a[i][j]==k-1)
			break;
	    }
		if(i==0 && j!=n-1 && a[n-1][j+1]==0)
		{
			a[n-1][j+1]=k;
			continue;
		}
	    if(j==n-1 && i!=0)
	    {
	    	a[i-1][0]=k;
	    	continue;
		}
		if(a[i-1][j+1]!=0)
		{
			a[i+1][j]=k;
			continue;
		}
	    if(i==0 && j==n-1)
	    {
	    	a[i+1][j]=k;
	    	continue;
		}
	    a[i-1][j+1]=k;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

