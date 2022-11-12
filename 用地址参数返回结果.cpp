#include<stdio.h>
#include<math.h> 
int main()
{
	int a,b,c;
	int plus(int a,int b,int c);
	printf(" enter A and B:");
	scanf("%d%d",&a,&b);
	c=plus(a,b,c);
	printf("A+B=%d\n",c);
}
    int plus(int x,int y,int z)
    {
    z=x+y;
    return z;
    }
