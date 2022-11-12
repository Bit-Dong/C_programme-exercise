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
	LinkList CreateListF(void);
	void PrintList(LinkList head);
	head=CreateListF();		//建立单链表
	PrintList(head);		//打印单链表

}

//单链表的建立：
LinkList CreateListF(void)
{	char ch;
	LinkList head,s;			//头指针,注意定义
	//ListNode *s;			//工作指针
	head=NULL;				//链表开始为空
	ch=getchar();
	while (ch!='\n')
	{	s=(ListNode *)malloc(sizeof(ListNode));	//生成新结点
		s->data=ch;
		s->next=head;
		head=s;
		ch=getchar();
	}
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
