#include<stdio.h>
int main()
{
	float average(float array[10]);
	float score[10],aver;
	int i;
	printf("输入十个数：");
	for(i=0;i<10;i++)
	scanf("%f",&score[i]);
	printf("\n");
	aver=average(score);
	printf("平均数=%5.2f\n",aver);
}
    float average(float array[10])
    {
    	float aver,sum=array[0];
    	int i;
    	for(i=1;i<10;i++)
    	sum=sum+array[i];
    	aver=sum/10;
    	return aver;
	}
