#include<stdio.h>
int main()
{
	int i,j,b[2][3],*pb[2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=(i+1)*(j+1);
		}
	}
	pb[0]=b[0];
	pb[1]=b[1];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++,pb[i]++)
		{
			printf("b[%d][%d]=%d ",i,j,*pb[i]); 
		}
		printf("\n");
	}
}
