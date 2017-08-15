#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};

void Insert(struct Node** head)
{
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter Data : ");
	scanf("%d",&temp->data);
	temp->next=NULL;
	struct Node *temp1;
	temp1=*head;
	if(*head==NULL)
		*head=temp;
	else{
	while(temp1->next!=NULL)
		temp1=temp1->next;
	temp1->next=temp;
}
}
void Reverse(struct Node** head)
{
	struct Node *curr=*head;
	struct Node *prev=NULL;
	struct Node *nextt;

	while(curr!=NULL)
	{
		nextt=curr->next;
		curr->next=prev;
		prev=curr;
		curr=nextt;
	}
	*head=prev;
	pprint(head);
}
void pprint(struct Node** head)
{
	struct Node* curr=*head;
	while(curr!=NULL)
	{
		printf("%d\t",curr->data);
		curr=curr->next;
	}
}
int main()
{
	struct Node *head=NULL;
	int ch;
	printf("What operation u wanna do : ");
	while(1){
		printf("1.Insert\n2.print\n3.Reverse.");
		scanf("%d",&ch);
		int n;
		switch(ch)
		{
			case 1:
				Insert(&head);
				break;
			case 2:
				pprint(&head);
				break;
			case 3:
				Reverse(&head);
				break;
			case 4:
				exit(0);
		}
	}
return 0;
}