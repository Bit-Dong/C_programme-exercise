#include<stdio.h>
int main()
{
	int aa0(int a);
	int i,sum;
	scanf("%d",&i);
	sum=aa0(i);
	printf("%d\n",sum);
}
int aa0(int a)
{
	int i,s=0;
	for(i=1;i<=a;i++)
	s=s+i;
	return(s);
}
