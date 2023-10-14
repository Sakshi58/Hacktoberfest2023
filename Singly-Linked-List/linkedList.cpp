#include<iostream>
#include<malloc.h>
using namespace std;
///creating the structure
struct Node
{
	int data;
	Node *next;    //inter-referential pointer
};
Node *first , *temp , *ttemp;    //global variable declaration

///initialization
void init()
{
	first=temp=ttemp = NULL;
}
void create_first(int x)
{
	//dynamic memory allocation at first pointer 
	first = (Node *)malloc(sizeof(Node));
	///adding first node 
	first->data=x;
	first->next=NULL;
}
///adding  other nodes 
void add_nodes(int x)
{
	temp=first;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	//creating  another memory location for  other nodes
	ttemp=(Node *)malloc(sizeof(Node));
	ttemp->data=x;
	ttemp->next= NULL;
	temp->next=ttemp;
}
//displaying the  linked list
void  disp()
{
	temp=first;
	while(temp!=NULL)
	{
		std::cout<<" "<<temp->data;
		temp=temp->next;
	}
}
///driver code
int main()
{
	init();
	create_first(10);
	add_nodes(20);
	add_nodes(30);
	add_nodes(40);
	add_nodes(50);
	add_nodes(600);
	disp();
}
