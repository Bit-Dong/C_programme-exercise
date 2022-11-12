#include<stdio.h>
int main()
{
	char ch1,ch2,ch3;
	ch1=getchar();
	ch2=getchar();
	ch3=getchar();      //依次输入三个字符
	putchar(ch3);putchar(ch2);putchar(ch1);   //反向输出三个字符
	return 0; 
	
}
