#include<stdio.h>
//#include<math.h>  
int main()
{
void aa0(int x,int y);
void aa1(int x,int y);
void aa2(int x,int y);
void aa3(int x,int y);
void max(int x,int y); 
void min(int x,int y);
int a,b;
scanf("%d%d",&a,&b);
aa0(a,b);
aa1(a,b);
aa2(a,b);
aa3(a,b);
max(a,b);
min(a,b);
}
void aa0(int x,int y)           //加法函数 
{
	int z;
	z=x+y;
	printf("%d\n",z);
}
void aa1(int x,int y)         //减法函数 
{
	int z;
	z=x-y;
	printf("%d\n",z);
}
void aa2(int x,int y)        //乘法函数 
{
	int z;
	z=x*y;
	printf("%d\n",z);
}
void aa3(int x,int y)       //除法函数 
{
	int z;
	z=x/y;
	printf("%d\n",z);
}
void max(int x,int y)
{
	int z;
	z=x>y?x:y;
	printf("%d\n",z);
}
void min(int x,int y)
{
	int z;
	z=x<y?x:y;
	printf("%d\n",z);
}
