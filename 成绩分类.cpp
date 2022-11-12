//姓名：聂冬    学号：2006702-02 
//程序问题：90分以上A级  60-89 B级   60一下C级
 
#include<stdio.h>
int main()
{
	int score;
	printf("请输入分数：");
	scanf("%d",&score);
	if(score>=90)
	printf("A");
	if(score>=60&&score<=89)
	printf("B");
	if(score<=0)
	printf("C");
}
