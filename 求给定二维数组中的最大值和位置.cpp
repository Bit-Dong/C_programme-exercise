#include<stdio.h>
int main()
{
	int max,i,j,hang,lie;
	int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};    //3×4矩阵 (二维数组） 
	max=a[0][0]; 
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
				hang=i+1;
				lie=j+1;
			}
		}
	}
	printf("此二维数组中的最大值是%d,且位于第%d行第%d列\n",max,hang,lie);
} 
