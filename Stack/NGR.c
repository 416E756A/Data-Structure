#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	int *a;
	int top;
	int capacity;
};
struct Stack* creatStack(int capacity)
{
	struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
	
	stack->top=-1;
	stack->capacity=capacity;
	stack->a=(int*)malloc(stack->capacity*sizeof(int));
	return stack;
}
void push(int data,struct Stack* stack)
{
	stack->a[++stack->top]=data;
}
int pop(struct Stack* stack)
{
	return stack->a[stack->top--];
}
int main()
{
	int a[]={11,13,3,21};
	struct Stack* stack=creatStack(4);
	int i;
	for(i=0;i<4;i++)
		push(a[i],stack);
	
	struct Stack* stak1=creatStack(4);
	while(stack->top!=-1)
		push(pop(stack),stak1);

	
	return 0;
}