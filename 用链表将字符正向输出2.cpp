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
	LinkList CreateListR1(void);
	void PrintList(LinkList head);
	head=CreateListR1();		//建立单链表
	PrintList(head);		//打印单链表

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
