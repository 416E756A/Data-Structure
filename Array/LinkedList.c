#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
void InsertionAtEnd(struct Node** head)
{
	struct Node* temp=(struct Node *)malloc(sizeof(struct Node));
	printf("%s\n","Enter value: ");
	scanf("%d",&temp->data);
	if(*head==NULL)
		*head=temp;
	else
		{
			struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));
			temp1=*head;
			for(;temp1->next!=NULL;temp1=temp1->next);
				temp1->next=temp;
			/* while(temp1->next!=NULL){
				temp1=temp1->next;
			}
			temp1->next=temp;
			*/

		}
	temp->next=NULL;

}
void PrintLinkedList(struct Node** head)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp=*head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
void InsertAtFront(struct Node** head)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
	printf("%s\n","Enter data to InsertAtFront : ");
	scanf("%d",&temp->data);
	if(*head!=NULL){
		temp->next=*head;
		*head=temp;

	}
	else
	{
		*head=temp;
		temp->next=NULL;
	}
}
void InsertAfterGivenNode(int n,struct Node** head)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
	printf("%s\n","Enter data to InsertAtFront : ");
	scanf("%d",&temp->data);
	if(*head==NULL)
	{
		*head=temp;
		temp->next=NULL;
	}
	else
	{
		int i=0;
		for(temp1=*head;i<n-1 && temp1->next!=NULL;temp1=temp1->next,i++);
			temp->next=temp1->next;
			temp1->next=temp;
	}
}
void DeleteKey(int key,struct Node** head)
{
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp=*head;
	while(temp->data!=key)
	{
		temp=temp->next;
	}
	if(temp==NULL)
		printf("%s\n","Key Not Found" );
	else
	{
		while(temp!=NULL)
		{
			temp->data=temp->next->data;
			temp->next=temp->next->next;
			temp=temp->next;
		}
		free(temp);
	}
}
void DeleteFromNode(int n,struct Node** head)
{
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp=*head;
	while(n-->1)
	{
		temp=temp->next;
		if(temp->next->next==NULL)
			break;
	}
	if(temp==NULL)
		printf("%s\n","Nothing to Delete." );

	if(temp->next->next==NULL)
		{

			free(temp->next->next);
			temp->next=NULL;
		}
	else
	{
		while(temp!=NULL){
			temp->data=temp->next->data;
			temp->next=temp->next->next;
			temp=temp->next;
			free(temp);
		}
	}
}
void LengthLinkedList(struct Node** head)
{
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp=*head;
	int count=0;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}
	printf("\nLength of Linked List is : %d\n",count );
}
int RecursiveLength(struct Node *head)
{

	if(head==NULL)
		return 0;
	return 1+RecursiveLength(head->next);
}
void SearchElement(int key,struct Node** head)
{
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp=*head;int i=0;
	while(temp!=NULL && temp->data!=key){
		temp=temp->next;
		i++;
	}
	if(temp==NULL)
		printf("%s\n","Not found" );
	else
	printf("%d found at %d node\n",temp->data,i+1);
}
int RecursiveSearch(int key,struct Node* head)
{
	static int i=0;
	if(head->next==NULL || head->data==key)
		return i+1;
	i++;
	return RecursiveSearch(key,head->next);
}
int main()
{
	struct Node *head=NULL;
	//struct Node *tmp=head;
	int p;
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	int ch;
	printf("What operation u wanna do : ");
	while(1){
		printf("1.InsertionAtEnd\n2.PrintLinkedList\n3.InsertAtFront\n4.InsertAfterGivenNode\n5.DeleteKey\n6.DeleteFromNode\n7.LengthLinkedList\n8.RecursiveLength\n9.SearchElement\n10.RecursiveSearch.\n : ");
		scanf("%d",&ch);
		int n;
		switch(ch)
		{
			case 1:
				InsertionAtEnd(&head);
				break;
			case 2:
				PrintLinkedList(&head);
				break;
			case 3:
				InsertAtFront(&head);
				break;
			case 4:
				printf("Enter the Node After which you wanna enter the value : ");
				scanf("%d",&n);
				InsertAfterGivenNode(n,&head);
				break;
			case 5:
				printf("Enter the Data you wanna Delete : ");
				scanf("%d",&n);
				DeleteKey(n,&head);
				break;
			case 6:
				printf("Enter the Node you wanna Delete : ");
				scanf("%d",&n);
				DeleteFromNode(n,&head);
				break;
			case 7:
				LengthLinkedList(&head);
				break;
			case 8:
				temp=head;
				p=RecursiveLength(temp);
				printf("\nLength of Linked List is : %d\n",p);
				break;
			case 9:
				printf("Enter the Data to Search : ");
				scanf("%d",&n);
				SearchElement(n,&head);
				break;
			case 10:
				temp=head;
				printf("Enter the Data to Search : ");
				scanf("%d",&n);
				p=RecursiveSearch(n,temp);
				printf("\nKey found at : %d\n",p);
				break;
			case 11:
				exit(0);
				break;
			default:
				break;
		}
	}
	return 0;
}
