#include<stdio.h>
int main()
{
	int qiuhe(int i);
	int a,s;
	scanf("%d",&a);
	s=qiuhe(a);
	printf("s=%d\n",s);
	
}
int qiuhe(int i)
{
	int z=0;
	while(i<=100)
	{
		z=z+i;
		i++;
	}
	return (z);
}

