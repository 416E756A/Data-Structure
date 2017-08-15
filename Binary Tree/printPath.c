#include<stdio.h>
#include<stdlib.h>
struct TNode
{
	int data;
	struct TNode* left;
	struct TNode* right;
};
struct TNode* Queue[100];
int front=0;
int rear=-1;

void enqueue(struct TNode* root)
{
	Queue[++rear]=root;
}
void Dequeue()
{
	rear--;
}
struct TNode* NewNode(int data)
{
	struct TNode* root=(struct TNode*)malloc(sizeof(struct TNode));
	root->left=NULL;
	root->right=NULL;
	root->data=data;
	return root;
}
int topData()
{
	if(rear==-1)
		return -1;
	return Queue[rear]->data;
}
void printpath(struct TNode* root)
{
	if(root==NULL){
		printQueue();
		Dequeue();
		//Dequeue();
		//printQueue();
		printf("\n");
		return;
	}
	if(!(topData()==root->data))
		enqueue(root);
	else
		Dequeue();
	printpath(root->left);
	if(!(topData()==root->data))
		enqueue(root);
	else
		Dequeue();
	printpath(root->right);
}
printQueue()
{
	int i=front;
	
	for(;i<=rear;i++){
		printf("%d\t",Queue[i]->data);
	}
}
int main()
{
	struct TNode* root=NewNode(20);
	root->left=NewNode(1);
	root->right=NewNode(2);
	root->left->left=NewNode(3);
	root->left->right=NewNode(4);
	root->right->left=NewNode(5);
	root->right->right=NewNode(6);

	printpath(root);
	//printQueue();
	return 0;
}