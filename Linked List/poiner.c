#include<stdio.h>
#include<stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};

void InsertionAtEnd(struct Node** head)
{
  struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
  struct Node *temp1=(struct Node*)malloc(sizeof(struct Node));
  temp->next=NULL;
  temp1=*head;
  printf("Enter Data : " );
  scanf("%d",&temp->data);
  if(*head==NULL)
    *head=temp;
  else
  {
    while(temp1->next!=NULL)
      temp1=temp1->next;
      temp1->next=temp;
  }
}
void print(struct Node** head)
{
  struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
  temp=*head;
  while(temp->next!=NULL)
  {
    printf("%d\t",temp->data);
    temp=temp->next;
  }
}

int main()
{
  struct Node *head=NULL;
  int ch;
  while(1)
  {
    printf("1.insert\n2.Print.");
    scanf("%d",&ch);
    switch (ch) {
      case 1:
        InsertionAtEnd(&head);
        break;
      case 2:
        print(&head);
        break;
      case 3:
        exit(0);
    }
  }
}
