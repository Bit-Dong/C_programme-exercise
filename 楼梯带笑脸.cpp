//姓名：聂冬   学号：2006702-02 
//程序问题：楼梯带笑脸
 
#include <stdio.h>
int main()
{
	int i,j;
	printf("\1\1\n");		
	for(i = 0;i < 10;i++)
	{
		for(j = 0;j <= i;j++)
		{
			printf("%c%c", '\xA1', '\xF6');		
		}
		printf("\n");
	}
	return 0;
}
