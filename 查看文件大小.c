#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	long int size=0;
	fp=fopen("test.txt","r");
	fseek(fp,0,SEEK_END);
	size=ftell(fp);
	fclose(fp);
	printf("The size of file is:%ld\n",size);
	return 0;
 } 
