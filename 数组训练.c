#include <stdio.h>
int main()
{
	int a[50],i,n=1,b[5][10],j,k,c[10][5],m[10][10],N[10],x[5][6],y[5][6],K[5][6],o[2][3]={{1,2,3},{4,5,6}},p[3][2]={{1,2},{3,4},{5,6}},op[2][2];
    a[0]=1; 
	printf ("数组A:\n");
    printf ("%5d",a[0]);
	for (i=1;i<=49;i++)
	{
		a[i]=a[i-1]+2;
		printf ("%5d",a[i]);
		n=n+1;
		if (n%5==0)
			printf ("\n");
	}
	printf ("数组B:\n");
	i=0;
	for (j=0;j<=4;j++)
	{
		for (k=0;k<=9;k++)
		{
			b[j][k]=a[i];
			i=i+1;
			printf ("%5d",b[j][k]);
		}
		printf ("\n");
	}
	printf ("数组C:\n");
	for (k=0;k<=9;k++)
	{
		for (j=0;j<=4;j++)
		{
			c[k][j]=b[j][k];
			printf ("%5d",c[k][j]);
		}
		printf ("\n");
	}
	printf ("数组M:\n");
	for (i=0;i<=9;i++)
	{
		for (j=0;j<=9;j++)
		{
			m[i][j]=10*i+j+1;
			printf ("%5d",m[i][j]);
		}
    printf ("\n");
	}
	printf("数组n：\n");
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j)
			{
				N[i]=m[i][i];
				printf("%5d",N[i]);
			}
			
		} 
	}
	printf("\n");
	printf("数组x：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			x[0][0]=1;
			x[i][j]=x[i][j-1]+2;
			y[0][0]=2;
			y[i][j]=y[i][j-1]+2;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%5d",x[i][j]);
		}
		printf("\n");
	}
	printf("数组y:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%5d",y[i][j]);
		}
		printf("\n");
	}
	printf("数组k：\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			K[i][j]=x[i][j]+y[i][j];
			printf("%5d",K[i][j]);
		}
		printf("\n");
	}
	printf("数组op：\n");
	op[0][0]=o[0][0]*p[0][0]+o[0][1]*p[1][0]+o[0][2]*p[2][0];
	op[0][1]=o[0][0]*p[0][1]+o[0][1]*p[1][1]+o[0][2]*p[2][1];
	op[1][0]=o[1][0]*p[0][0]+o[1][1]*p[1][0]+o[1][2]*p[2][0];
	op[1][1]=o[1][0]*p[0][1]+o[1][1]*p[1][1]+o[1][2]*p[2][1];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%5d",op[i][j]);
		}
		printf("\n");
	}
}
