#include<iostream>
using namespace std;

class BASE
{
	char c;
public:
	BASE(char n):c(n)     // 类的成员初始化列表的方法 
	{	
	}
	virtual ~BASE()     //基类里要有一个虚析构函数 
	{
		cout<<c;
	}
};

class DERIVED:public BASE     //继承BASE 
{
	char c;
public:
	DERIVED(char n):BASE(n+1),c(n)    //派生类(子类)构造函数可以使用初始化器列表机制将值传递给基类(父类)构造函数
	{
	}
	~DERIVED()
	{
		cout<<c;
	}
};

int main(){
	DERIVED('X');   //匿名的DERIVED类对象   先调用基类构造函数，再调用派生类构造函数,先调用派生类的析构函数，再调用基类的析构函数
	return 0;	
}
