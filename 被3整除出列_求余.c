//一群人围成一圈，123的报数，报3者出列，求最后一个人

#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n,s,sum,m,k;
	int a[10];
	printf("Please input array number:");
	scanf("%d",&n);
	sum=0;
	s=0;
	for(k=0;k<n;k++){
		a[k]=1;
	}
	
	for(i=0;i<n;i++){
		s+=a[i];

		if(s==3){
			s=0;
			a[i]=0;
			sum++;
		}
		if(i==(n-1)){
			i=-1;
		}
		if(sum==n-1){
			for(m=0;m<n;m++){
				if(a[m]==1) printf("%d\n",m+1);
			}
			break;
		}
	}
	return 0;
}
