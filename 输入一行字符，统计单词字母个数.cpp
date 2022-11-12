#include<stdio.h>
int main()
{
	char c[100];
	int i,a,b,sum=0,word=0;
	gets(c);                   //输入一个字符串给字符数组c 
	for(i=0;(a=c[i])!='\0';i++)
	{
		if(a==' ')
		{
			b=0;
		}
		else
		sum++;
		if(b==0)
		{
			b=1;
			word++;
		}
	}
	printf("There are %d words and %d zimu in this line\n",word,sum);
} 
