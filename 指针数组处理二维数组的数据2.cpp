#include<stdio.h>
int main()
{
	int i,j,b[2][3],c[3][2],*pc[3];
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=(i+1)*(j+1);
			c[j][i]=b[i][j];
		}
	}
	pc[0]=c[0];
	pc[1]=c[1];
	pc[2]=c[2];
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++,pc[i]++)
		{
			printf("c[%d][%d]=%d ",i,j,*pc[i]); 
		}
		printf("\n");
	}
}
