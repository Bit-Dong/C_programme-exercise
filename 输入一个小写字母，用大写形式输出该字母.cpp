#include"stdio.h"
int main()
{
	char a;
	printf("input a lowercase letter:");
	a=getchar();
	a=a-32;               //将小写字母转换成对应的大写字母 
	printf("%c\n",a);
	return 0;
}
