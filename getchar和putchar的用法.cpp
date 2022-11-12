#include<stdio.h>
int main()
{
	char a,b,c;
	a=getchar();          //getchar是输入一个字符 
	b=getchar(); 
	c=getchar();
	putchar(a);          //putchar是输出一个字符 
	putchar(b);
	putchar(c);
	putchar('\n');
	return 0;
}
