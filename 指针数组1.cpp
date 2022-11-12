#include<stdio.h>
int main()
{
	static int b[2][3];
	static int *pb[]={b[0],b[1]};
	int i,j;
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	*(b[i]+j)=(i+1)*(j+1);
	for(i=0;i<2;i++)
	for(j=0;j<3;j++)
	printf("b[%d][%d]:%2d\n",i,j,pb[i][j]);
}
