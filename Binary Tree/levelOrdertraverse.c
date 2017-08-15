#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* newnode(int data)
{
	struct Node* root=(struct Node*)malloc(sizeof(struct Node));
	root->left=NULL:
	root->right=NULL;
	root->data=data;
	return root;
}
void levelOrder(struct Node* root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		levelOrder(root->left)
	}
}
int main()
{

}