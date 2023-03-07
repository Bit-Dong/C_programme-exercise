#include<iostream>
using namespace std;

int main()
{
	int a=10,b=20,c=30;
	int &ra=a;
	int &rb=b;
	int &rc=c;
	//int &arr[3]={ra,rb,rc};    报错，不存在引用的数组 
	int num[3]={a,b,c};
	int (&arr)[3]=num;      //数组的引用 
	for(int i=0;i<3;i++)
		cout<<arr[i]<<" ";  //输出10 20 30 
	cout<<endl;
	return 0;
}
