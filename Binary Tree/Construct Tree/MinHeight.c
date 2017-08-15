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

int MinHeight(struct node* root)
{
	if(root==NULL)
		return 0;
	if(root->left==NULL && root->right==NULL)
		return 1;
	int p=MinHeight(root->left);
	printf("%d\t%d\n",root->data,p);
	int q=MinHeight(root->right);
	printf("%d\t%d\n",root->data,q);
	if(p==0)
		return q;
	if(q==0)
		return p;
	if(p<q)
		return p+1;
	return q+1;
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
    printf("%d\n",MinHeight(root) );
}