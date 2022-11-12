#include<stdio.h>
//#include<math.h>  
int main()
{
int add(int x,int y);              //加法 
int add1(int x,int y);             //减法 
int add2(int x,int y);             //乘法 
int add3(int x,int y);             //除法 
int max(int x,int y);              //最大值 
int min(int x,int y);              //最小值 
long factor(int n);                //阶乘 
int gcd(int x,int y);              //最大公约数 
int sushu(int n);                  //素数 
int a,b,c,d,e,f,g,h,i,j;
scanf("%d%d",&a,&b);
c=add(a,b);
printf("%d\n",c);
d=add1(a,b);
printf("%d\n",d);
e=add2(a,b);
printf("%d\n",e);
f=add3(a,b);
printf("%d\n",f);
g=max(a,b);
printf("%d\n",g);
h=min(a,b);
printf("%d\n",h);
i=factor(a);
printf("%d\n",i);
j=gcd(a,b);
printf("%d\n",j);
if(sushu(a))
printf("%d是素数\n",a);
else
printf("%d不是素数\n",a);
return 0;
}
int add(int x,int y)           //加法函数 
{
	int z;
	z=x+y;
	return (z);
}
int add1(int x,int y)         //减法函数 
{
	int z;
	z=x-y;
	return(z);
}
int add2(int x,int y)        //乘法函数 
{
	int z;
	z=x*y;
	return(z);
}
int add3(int x,int y)       //除法函数 
{
	int z;
	z=x/y;
	return(z);
}
int max(int x,int y)       //max函数 
{
	int z;
	z=x>y?x:y;
	return(z);
}
int min(int x,int y)      //min函数 
{
	int z;
	z=x<y?x:y;
	return(z);
}                                                  //用for循坏求阶乘 
long factor(int i)      //factor函数               //long factor(int i) 
{                                                  //long f=1;
	long f;                                        //int i;
	if(i==0)                                       //for(i=1;i<=100;i++)
	f=1;                                           //f=f*i;
	else                                           //return f;
	f=i*factor(i-1);     //递归调用，求（n-1）！ 
	return f;
}
int gcd(int x,int y)                              //      int gcd(int a,int b)
{                                                 //  { 
	int z;                                        //      int r;   
	if(y==0)                                      //      while(a%b!=0)
	z=x;                                         //   {    r=a%b;
	else                                         //        a=b;
	z=gcd(y,x%y);        //递归调用              //        b=r;
	return(z);                                   //   }    return b; 
}                                                //   }
int sushu(int n)
{
	int flag=1,i;
	for(i=2;i<=n-1;i++)
{
		if(n%i==0)
		flag=0;
		break;
}
	return (flag);
}
