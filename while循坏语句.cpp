#include<stdio.h>
int main()
{
	float score,average=0;
	int n=0;
	scanf("%f",&score);
	while(score>=0)
{
	average+=score;
	n++;
	scanf("%f",&score);
	
}
if(n!=0)average=average/n;
printf("%6.2f",average);
return 0; 
}
