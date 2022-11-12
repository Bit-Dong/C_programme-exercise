#include<stdio.h>
int main()
{
	struct regist
	{
	int x;
	char y;
	float z;
	long l;
	double d;
	char str[20];
    };
    struct regist wang,li,zhang;
	printf("char  :%d\n",sizeof(char));
	printf("int  :%d\n",sizeof(int));
	printf("long  :%d\n",sizeof(long));
	printf("float  :%d\n",sizeof(float));
	printf("double  :%d\n",sizeof(double));
	//printf("str[]  :%d\n",sizeof(str));
	printf("regist :%d\n",sizeof(struct regist));
	printf("wang  :%d\n",sizeof(wang));
}
