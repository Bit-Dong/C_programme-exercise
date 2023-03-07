#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char a[10]="ab";
	char *str=a; 
	int num=0;
	while(*str!='\0') 
	{ 
		int digital=*str-48; 
		num=num*10+digital; 
		str=str+1; 
	} 
	printf("%d",'a');
} 
