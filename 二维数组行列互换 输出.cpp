#include<stdio.h>
int main()
{
	int i,j,b[3][2];
	int a[2][3]={{1,2,3},{4,5,6}}; 	
	printf("数组a：\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			b[j][i]=a[i][j];
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	printf("数组b：\n");
	for(j=0;j<=2;j++)
	{
		for(i=0;i<=1;i++)
		{
			printf("%5d",b[j][i]);
		}
		printf("\n");
	}
} 
