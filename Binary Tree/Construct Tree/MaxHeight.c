#include<stdio.h>
	#include<stdlib.h>
	struct node
	{
		int data;
		struct node* left;
		struct node* right;
	};


	struct node* NewNode(int data)
	{
		struct node* root=(struct node*)malloc(sizeof(struct node));
		root->left=NULL;
		root->right=NULL;
		root->data=data;
		return root;
	}

int MaxHeight(struct node* root)
{
	if(root==NULL)
		return 0;
	int p=MaxHeight(root->left);
	int q=MaxHeight(root->right);
	if(p>q)
		return p+1;
	return q+1;
}
int main()
{
	struct node *root = NewNode(1);
    root->left        = NewNode(2);
    root->right       = NewNode(3);
    root->left->left  = NewNode(4);
    root->left->right = NewNode(5);
    root->right->left  = NewNode(6);
    root->left->left->right = NewNode(7);
    printf("%d\n",MaxHeight(root) );
}