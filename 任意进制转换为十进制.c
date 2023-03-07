#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int n;
	int i=0;
	int result=0;
	char ch[64];
	printf("Please enter your choice:2->bin,8->oct,16->hex\n");
	scanf("%d",&n);
	printf("Please enter a number:");
	getchar();   //捕获回车键
	while((ch[i]=getchar())!='\n'){
		if(ch[i]>='A'){
			ch[i]=tolower(ch[i]);   //转换为小写字母
			result=result*n+(ch[i]-'a'+10); 
		}
		else
			result=result*n+(ch[i]-'0');
		i++;
	}
	printf("After convert: %d\n",result); 
 } 

//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//void getmeory(char **p);
//int main(){
//	char *str=NULL;
//	getmeory(&str);
//	strcpy(str,"hello world!");
//	printf("%s\n",str);
//}
//void getmeory(char **p){
//	*p=(char *)malloc(100);
//}
