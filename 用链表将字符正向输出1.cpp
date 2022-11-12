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
	LinkList CreateListR(void);
	void PrintList(LinkList head);
	head=CreateListR();		//建立单链表
	PrintList(head);		//打印单链表

}

//单链表的建立：
LinkList CreateListR(void)
{	char ch;
	LinkList head;			//头指针
	ListNode *s,*r;			//工作指针
	head=NULL;				//链表开始为空
	r=NULL;					//链表尾指针开始为空
	while ((ch=getchar())!='\n')
	{	s=(ListNode *)malloc(sizeof(ListNode));	//生成新结点
		s->data=ch;
		if (head==NULL)
			head=s;			//新结点插入空表
		else r->next=s;
		r=s;
	}
	if (r!=NULL)
		r->next=NULL;		//对于非空表，将尾结点指针域置空
	return head;			//返回头指针
}

//单链表的打印：
void PrintList(LinkList head)
{
	ListNode *p;
	for(p=head;p;p=p->next)
		printf("%c",p->data);
	printf("\n");
}
