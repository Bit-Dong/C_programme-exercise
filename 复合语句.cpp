#include<stdio.h>
int main()
{
	int x=1,y=2;
	{
		int x=2;
		{
			int x=3;
		    printf("x=%d,y=%d\n",x,y);   //x=3
		}
		printf("x=%d,y=%d\n",x,y);     //x=2
	}
	printf("x=%d,y=%d\n",x,y);      //x=1
	return 0;
}
