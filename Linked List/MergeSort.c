#include<stdio.h>
struct Node 
{
	int data;
	struct Node* next;
};
void divide(struct Node** head,struct Node** a,struct Node** b)
{
	if(*a)
	struct Node* slow=*head;
	struct Node* fast=*head;
	while(fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	*b=slow->next;
	slow->next=NULL;
	*a=*head;
	return 0;
}
void GeneralFunc(struct Node** head)
{
	struct Node* a;
	struct Node* b;
	if(*head==NULL || *head->next==NULL)
		return ;
	divide(head,&a,&b);
}