#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
};

void display(struct Node* head)
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}

void push(int d,struct Node** head)
{
	struct Node* temp=(struct Node *)malloc(sizeof(struct Node));
	temp->next=NULL;
	temp->data=d;
	struct Node* temp1=*head;
	if(*head==NULL)
		*head=temp;
	else
	{
		while(temp1->next!=NULL)
			temp1=temp1->next;
		temp1->next=temp;
	}

}

void findIntersection(struct Node** head1,struct Node** head2,struct Node** res)
{
	struct Node* temp1=*head1;
	struct Node* temp2=*head2;
	

	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data==temp2->data)
		{
			//printf("\n");
			//printf("%d\t",temp1->data);
			push(temp1->data,res);
			temp1=temp1->next;
			temp2=temp2->next;
		}
		else if(temp1->data<temp2->data)
			temp1=temp1->next;
		else
			temp2=temp2->next;
	}
}

int main()
{
	struct Node *head1=NULL;
	struct Node *head2=NULL;
	struct Node* res=NULL;
	push(10,&head1);
	push(20,&head1);
	push(30,&head1);
	push(40,&head1);
	push(50,&head1);
	display(head1);
	printf("\n");

	push(5,&head2);
	push(10,&head2);
	push(15,&head2);
	push(20,&head2);
	push(25,&head2);
	push(30,&head2);
	display(head2);
	printf("\n");
	findIntersection(&head1,&head2,&res);
	display(res);
	
	
return 0;
}