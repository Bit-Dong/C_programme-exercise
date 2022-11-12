#include<stdio.h>
int main()
{
	float score,average=0;
	int n=0;
	do
	{
		scanf("%f",&score);
		if(score>=0)
		{
			average+=score;
			n=n+1;
			
		}
	}while(score>=0);
	if(n!=0)average/=n;
	printf("%6.2f",average);
	return 0; 
}
