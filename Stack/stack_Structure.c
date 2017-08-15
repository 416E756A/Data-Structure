#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int top;
	int capacity;
	int *ar;
};

struct Stack* CreateStack(int capacity)
{
	struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity=capacity;
	stack->top=-1;
	stack->ar=(int *)malloc(stack->capacity*sizeof(int));
	return stack;
};

int isFull(struct Stack* stack)
{
	return stack->top==stack->capacity-1;
}
int isEmpty(struct Stack* stack)
{
	return stack->top==-1;
}
void push(int data,struct Stack* stack)
{
	if(!isFull(stack))
	{
		stack->ar[++stack->top]=data;
	}
}
void pop(struct Stack* stack)
{
	if(!isEmpty(stack))
	{
		printf("%d Deleted.\n",stack->ar[stack->top]);
		--stack->top;
	}
}
int main(void)
{
	struct Stack* stack=CreateStack(100);
	push(1,stack);
	push(2,stack);
	push(3,stack);
	pop(stack);
}