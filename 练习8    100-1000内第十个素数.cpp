#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int i,j,flag,s=0;
	for(i=100;i<=1000;i++)
	{
		flag=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=1;break;
			}
		}
		if(flag==0)
		{
			printf("%d",i);
			s=s+1;
		}
		if(s==10)
		break;
		}
	printf("i=%d\n",i);
	return 0;
}
