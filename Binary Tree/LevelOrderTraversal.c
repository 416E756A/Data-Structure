	#include<stdio.h>
	#include<stdlib.h>
	struct node
	{
		int data;
		struct node* left;
		struct node* right;
	};

	struct queue
	{
		struct node* info;
		struct queue* next;
	};

	struct node* NewNode(int data)
	{
		struct node* root=(struct node*)malloc(sizeof(struct node));
		root->left=NULL;
		root->right=NULL;
		root->data=data;
		return root;
	}


	void enqueue(struct queue** que,struct node* newnode)
	{
		struct queue* qnode = (struct queue*)malloc(sizeof(struct queue));
		struct queue* temp=*que;
		qnode->info=newnode;
		qnode->next=NULL;
		if(*que==NULL)
		{
			*que=qnode;
			return;
		}
		while(temp!=NULL)
			temp=temp->next;
		temp->next=qnode;
	}
	struct node* dequeue(struct queue** que)
	{
		if(que!=NULL){
			struct node* a=*que->info;
			*que=*que->next;
			return a;
		}
		return NULL;
	}



	void levelorder(struct node* root)
	{
		
		struct queue* que=(struct queue*)malloc(sizeof(struct queue));
		struct node* temp=root;
		while(temp)
		{
			printf("%d\t",temp->data);
			if(temp->left)
				enqueue(&que,temp->left);
			if(temp->right)
				enqueue(&que,temp->right);
			temp=dequeue(&que);
		}
	}
	int main()
	{
		struct node* root=NewNode(1);
		root->left             = NewNode(2);
	    root->right           = NewNode(3);
	    root->left->left     = NewNode(4);
	    root->left->right   = NewNode(5);

	    levelorder(root);
	    return 0;
	}