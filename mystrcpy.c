#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* mystrcpy(char *s,const char *m){
	char *p=s;
	if(s==NULL||m==NULL) return NULL;
	if(s==m) return s;
	
//	while(*s=*m){	    //?????
//		s++;
//		m++;
//	}
	
	while(*s++=*m++){}

	return p;
}

int main(){
	const char m[8]="abcdefg";
	char n[6]="da";
	char *s=mystrcpy(n,m);
	printf("%s",s);
} 

