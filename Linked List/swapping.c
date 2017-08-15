#include<stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
};
void InsertionAtEnd(struct Node** head)
{
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter Data : ");
  scanf("%d",&temp->data);


  if(*head==NULL)
    *head=temp;
  else{
    struct Node* temp1=(struct Node*)malloc(sizeof(struct Node));

    temp1=*head;
    for(;temp1->next!=NULL;temp1=temp1->next);
      temp1->next=temp;
}
temp->next=NULL;
}
void swap(int a,int b,struct Node** head)
{
  struct Node* prev1=(struct Node*)malloc(sizeof(struct Node));
  struct Node* prev2=(struct Node*)malloc(sizeof(struct Node));
  prev1=*head;
  prev2=*head;
  while(prev1->next!=NULL || prev1->data!=a)
    prev1=prev1->next;
  while(prev2->next!=NULL || prev2->data!=b)
    prev2=prev2->next;
  struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
  int d=prev1->data;
  prev1->data=prev2->data;
  prev2->data=d;

}
void printList(struct Node** head)
{
  struct Node* prev1=(struct Node*)malloc(sizeof(struct Node));
  prev1=*head;
  while(prev1!=NULL)
  {
    printf("%d\t",prev1->data );
    prev1=prev1->next;
  }
}
int main()
{
  struct Node *head=NULL;
  int ch,a,b;

  while(1)
  {
    printf("1.Swap\n2.Print\n3.Insert \n :: ");

    scanf("%d",&ch);
    switch (ch) {
      case 1:
        printf("\nEnter value 1 and value 2 : ");
        scanf("%d%d",&a,&b);
        swap(a,b,&head);
        break;
      case 2:
        printList(&head);
        break;
      case 3:
        InsertionAtEnd(&head);
        break;
      case 4:
        exit(0);
    }
  }
  return 0;
}
