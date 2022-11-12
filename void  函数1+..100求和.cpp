#include<stdio.h>
int main()
{
	void qiuhe();  //定义加法函数 
	qiuhe();       //调用加法函数 
}
void qiuhe()       //加法函数 
{
	int i,s=0;
	for(i=1;i<=100;i++)
	s=s+i;
	printf("s=%d\n",s);
}
