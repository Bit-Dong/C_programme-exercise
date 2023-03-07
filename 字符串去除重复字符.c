#include<stdio.h>
#include<string.h>

void test01(char a[]){
	int n=strlen(a);
	int i,j,k,m;
	for( i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(k=j;k<n;k++){
					a[k]=a[k+1];
				}
				n--;
			}  
		}
	}
	a[n]='\0';
}

int main()
{
	char a[100]={0};
	scanf("%s",a);
	test01(a);
	printf("%s",a);
} 
