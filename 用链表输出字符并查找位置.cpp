#include <stdio.h>
#include <stdlib.h>
//单链表的定义：
typedef char DataType;		//DataType可以是任何相应的数据类型如int, float或char
typedef struct node			//结点类型定义
{	DataType data;			//结点的数据域
	struct node *next;		//结点的指针域
}ListNode;
typedef ListNode *LinkList;

int main()
{
	LinkList head;
	ListNode *p;
	int i;
	LinkList CreateListR1(void);
	LinkList GetNode(LinkList head,int i);
	void PrintList(LinkList head);
	head=CreateListR1();		//建立单链表
	PrintList(head);		//打印单链表
	printf("请输入欲查找结点的序号：");
	scanf("%d",&i);
	p=GetNode(head,i);
	if (p==NULL)
		printf("未找到\n");
	else
		printf("找到第%d结点的值是%c\n",i,p->data);
}

//单链表的建立：
LinkList CreateListR1(void)
{	char ch;
	LinkList head=(ListNode *)malloc(sizeof(ListNode));
	ListNode *s,*r;
	r=head;					//尾指针初值指向头结点
	while ((ch=getchar())!='\n')
	{	s=(ListNode *)malloc(sizeof(ListNode));	//生成新结点
		s->data=ch;
		r->next=s;
		r=s;
	}
	r->next=NULL;
	return head;			//返回头指针
}

//单链表的打印：
void PrintList(LinkList head)
{
	ListNode *p;
	for(p=head->next;p;p=p->next)
		printf("%c",p->data);
	printf("\n");
}

//单链表的查找
LinkList GetNode(LinkList head,int i)
{//在带头结点的单链表head中查找第i个结点
	int j;
	ListNode *p;
	p=head;j=0;				//从头结点开始扫描
	while (p->next && j<i)	//顺指针向后扫描，直到链表尾或找到为止
	{	p=p->next;
		j++;
	}
	if (i==j)
		return p;			//找到了第i个结点
	else
		return NULL;		//找不到满足条件的结点
}
