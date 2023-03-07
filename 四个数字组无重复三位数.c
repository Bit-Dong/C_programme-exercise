#include<stdio.h>
#include<string.h>

int main(){
	int i,j,k,n,l;
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			for(k=1;k<=4;k++){
				if(i!=j&&i!=k&&j!=k){
					n=i*100+j*10+k;
				l++;
				printf("%d\n",n);
				}				
			}
		}
	}
	printf("\n\n%d",l);
}
