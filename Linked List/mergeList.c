#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct Node
{
	int data;
	struct Node *next;
};
void MovetoResultant(struct Node** dest,struct Node** sour)
{
	struct Node *temp=*sour;
	//assert(temp!=NULL);
	*sour=temp->next;
	temp->next=*dest;
	
	*dest=temp;
}
struct Node* Merge(struct Node* head1,struct Node* head2)
{
	struct Node result;
	struct Node *tail=&result;
	result.next=NULL;
	while(1)
	{
		if(head1==NULL)
		{
			tail->next=head2;
			break;
		}
		else if(head2==NULL)
		{
			tail->next=head1;
			break;
		}
		if(head1->data <= head2->data)
		{
			MovetoResultant(&(tail->next),&head1);
		}
		else
			MovetoResultant(&(tail->next),&head2);
		tail=tail->next;
	}
	return result.next;
}
void display(struct Node **head)
{
	struct Node *temp;
	temp=*head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
void push(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node =
        (struct Node*) malloc(sizeof(struct Node));
 
    /* put in the data  */
    new_node->data  = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
int main()
{
	struct Node* head=NULL;
	struct Node* head1=NULL;
	struct Node* head2=NULL;
	push(&head1,60);
	push(&head1,50);
	push(&head1,40);
	push(&head1,30);
	push(&head1,20);
	push(&head1,10);
	push(&head2,49);push(&head2,35);push(&head2,31);push(&head2,21);push(&head2,2);
	
	printf("Head1 : ");
	display(&head1);
	printf("\nHead2 : ");
	display(&head2);
	printf("\n");
	head=Merge(head1,head2);
	display(&head);
	return 0;
}