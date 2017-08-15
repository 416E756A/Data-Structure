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

void MinHeight(struct node* root)
{
	static int count=0;
	if(root->left==NULL && root->right==NULL)
	{
		//printf("leaf node\n");
		count=count+1;
		return;
	}
	if(root->left!=NULL)
		MinHeight(root->left);
	//printf("%d\t%d\n",root->data,p);
	if(root->right!=NULL)
		MinHeight(root->right);
	//printf("%d\t%d\n",root->data,q);
printf("%d\n",count );
}
int main()
{
	struct node *root = NewNode(10);
    root->left        = NewNode(7);
    root->right       = NewNode(3);
    //root->left->left  = NewNode(4);
    root->left->right = NewNode(8);
   // root->right->left  = NewNode(6);
    //root->left->left->right = NewNode(7);
    MinHeight(root);
}