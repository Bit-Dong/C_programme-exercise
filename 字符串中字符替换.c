//½«×Ö·ût×ª»»Îª¡° ¡± 
#include<stdio.h>
#include<string.h> 

char *strl(char *m,const char *n){
	int i=0;
	int len=strlen(m);
	char *p=m;
	while(m!=NULL&&i<len){
		if(*p=='t'){
			*p=' ';
			p++;
		}
		else{
			p++;
		}
		i++;
	}
	return m;
}

int main(){
	char a[100];	
	scanf("%s",a);
	strl(a,"t");
	printf("%s",a);
}
