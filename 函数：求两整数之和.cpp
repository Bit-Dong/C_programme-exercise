#include<stdio.h>
#include<math.h>
int main()
{
	 int add(int x,int y);
	 int a,b,c;
	 scanf("%d%d",&a,&b);
	 c=add(a,b);
	 printf("sum is %d",c);
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return(z);
}
