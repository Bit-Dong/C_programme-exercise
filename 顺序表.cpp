#include<stdio.h>//顺序表的定义 
#define listsize 100//表空间大小 可根据实际需要而定 
typedef int datatype;//datatype可以使任何相应的数据类型如int 
typedef struct
{
datatype data[listsize];//向量data用于存放表结点 
int length;//当前的表长度 
}seqlist;

int main()
{
	seqlist L;
	int n=5,i,x;//欲建立的顺序表长度 
	L.length=0;
	void createlist(seqlist *L,int n);
	void printlist(seqlist L,int n);
	int locatelist(seqlist L,datatype x);
	createlist(&L,n);//建立顺序表 
	printlist(L,n);//打印顺序表 
    printf("输入要查找的值："); 
	scanf("%d",&x);
	i=locatelist(L,x);
	if(i==0)
		printf("未找到%d!\n",x);
		else
		printf("找到%d,在第%d个位置上！\n",x,i);
}

void createlist(seqlist *L,int n) //顺序表的建立 
{
int i;
for(i=0;i<n;i++)
scanf("%d",&(*L).data[i]);
//printf("%d  \n\n",(*L).data[i]);
(*L).length=n;
//for(i=0;i<n;i++)
//printf("%d   ",L.data[i]);
}

void printlist(seqlist L,int n)//顺序表的打印 
{int i;
for(i=0;i<n;i++)
	printf("%d   ",L.data[i]);
	printf("%d  ",i);
	printf("\n");
}

int locatelist(seqlist L,datatype x)//顺序表的查找 
{int i=0;
while(i<L.length &&L.data[i]!=x)//不等于还可以使<> 
       ++i;
if(i<L.length)return i+1;
else return 0;
 } 
