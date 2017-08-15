#include<stdio.h>
#include<stdlib.h>
struct BNode
{
	int data;
	struct BNode* left;
	struct BNode* right;
};
struct BNode* NewNode(int data)
{
	struct BNode* root=(struct BNode*)malloc(sizeof(struct BNode));
	root->data=data;
	root->left=root->right=NULL;
	return root;
}
void inorder(struct BNode* root)
{
	if(root==NULL)
		return;
	//struct BNode* temp=*root;
	
		inorder(root->left);
	printf("%d\t",root->data);
	
		inorder(root->right);
}
void insert(struct BNode** root,int data1)
{
	if((*root)==NULL){
		*root=NewNode(data1);
		 return;
	}
	if((*root)->data>data1)
		insert(&((*root)->left),data1);
	else if((*root)->data<data1)
		insert(&((*root)->right),data1);
}
struct BNode * minValueNode(struct BNode* node)
{
    struct BNode* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
struct BNode* deleteNode(struct BNode* root,int key)
{
	if(root==NULL)
		return root;
	if(key<root->data)
		root->left=deleteNode(root->left,key);
	else if(key>root->data)
		root->right=deleteNode(root->right,key);
	else
	{
		if(root->left==NULL)
		{
			struct BNode* temp=root->right;
			free(root);
			return temp;
		}
		else if(root->right==NULL)
		{
			struct BNode* temp=root->left;
			free(root);
			return temp;
		}
		struct BNode* temp = minValueNode(root->right);
 
        // Copy the inorder successor's content to this node
        root->data = temp->data;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);

	}
	return root;
}
int main()
{
	int ch,data;
	struct BNode* root=NULL;
	while(1)
	{
		printf("1.To Insert\n2.Display\n3.Delete");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Data to Insert : ");
				scanf("%d",&data);
				insert(&root,data);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				printf("Data to Delete : ");
				scanf("%d",&data);
				root=deleteNode(root,data);
				break;
		}
	}
	return 0;
}