#include<stdio.h>
#include<stdlib.h>
struct TNode
{
    int data;
    struct TNode* left;
    struct TNode* right;
};
struct LNode
{
	int data;
	struct LNode* next;
};
void push(struct LNode** head,int data)
{
	struct LNode* temp=(struct LNode*)malloc(sizeof(struct LNode));
	temp->next=NULL;
	temp->data=data;
	
	if(*head==NULL)
		*head=temp;
	else
	{
		struct LNode* temp1=(struct LNode*)malloc(sizeof(struct LNode));
		temp1=*head;
		*head=temp;
		temp->next=temp1;
	}
}
listPrint(struct LNode** node)
{
	struct LNode* temp=(struct LNode*)malloc(sizeof(struct LNode));	
	temp=*node;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
struct TNode* NewNode(int data)
{
    struct TNode* root=(struct TNode*)malloc(sizeof(struct TNode));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
struct TNode* queue[100];
int rear=-1;
int front=0;
void enqueue(struct TNode* root)
{
	++rear;
	queue[rear]=root;
}
struct TNode* dequeue()
{
	struct TNode* temp=queue[front];
	front++;
	return temp;
}
int isQueueEmpty()
{
	return rear==(front-1);
}
void convertList2Binary(struct LNode** head,struct TNode** root)
{
	struct LNode* temp1=(struct LNode* )malloc(sizeof(struct LNode));
	temp1=*head;
	*root=NewNode(temp1->data);
	enqueue(*root);
	temp1=temp1->next;
	while(temp1!=NULL)
	{
		struct TNode* temp=dequeue();
		temp->left=NewNode(temp1->data);
		enqueue(temp->left);
		temp1=temp1->next;
		if(temp1!=NULL)
		{
			temp->right=NewNode(temp1->data);
			enqueue(temp->right);
		}
	}
}
void display(struct TNode* root)
{
	
	if(root->left)
		display(root->left);
	printf("%d\t",root->data);
	if(root->right)
		display(root->right);
	
}
int main()
{
	struct LNode* head = NULL;
    push(&head, 36);  /* Last node of Linked List */
    push(&head, 30);
    push(&head, 25);
    push(&head, 15);
    push(&head, 12);
    push(&head, 10); /* First node of Linked List */
 
    struct TNode* root;
    //listPrint(&head);
    convertList2Binary(&head,&root);
 
    //cout << "Inorder Traversal of the constructed Binary Tree is: \n";
    display(root);
    return 0;
}