#include<iostream>
#include<malloc.h>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *first , *temp, *ttemp , *p;
void init()
{
	first=temp=ttemp=NULL;
}
void create_first(int x)
{
	first= (Node *)malloc(sizeof(Node));
	first->data=x;
	first->next= NULL;
}
void add_nodes(int x)
{
	temp=first;
	while(temp->next!=NULL)
	  temp=temp->next;
	ttemp= (Node *)malloc(sizeof(Node));
	ttemp->data=x;
	ttemp->next=NULL;
	temp->next=ttemp;
}
void add_after(int x,int y)
{
    temp= first;
    while(temp->data!=x)
      temp=temp->next;
    ttemp=temp->next;
    p=(Node *)malloc(sizeof(Node));
    p->data=y;
    p->next=ttemp;
    
    temp->next=p;
}
    
void disp()
{
	temp=first;
	while(temp!=NULL)
	{
		std::cout<<"\n"<<temp->data;
		temp=temp->next;
	}
}
int main()
{
	init();
	create_first(10);
	add_nodes(20);
	add_nodes(30);
	add_nodes(40);
	add_nodes(50);
	add_after(30, 90);
	disp();
	
}
