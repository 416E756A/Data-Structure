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
int min=10000;
void setMin(int data,struct Stack* stack1)
{
	if(min>data)
		min=data;
	stack1->a[++stack1->top]=min;
}

int getMin(struct Stack* stack)
{
	return stack->a[stack->top];
}
void push(int data,struct Stack* stack,struct Stack* stack1)
{
	setMin(data,stack1);
	stack->a[++stack->top]=data;
}
int pop(struct Stack* stack,struct Stack* stack1)
{
	int d=stack->a[stack->top--];
	stack1->top--;
	return d;

}
int main()
{
	int c[]={18,19,29,15,16};
	struct Stack* stack=creatStack(5);
	struct Stack* stack1=creatStack(5);
	int i;
	for(i=0;i<5;i++)
		push(c[i],stack,stack1);
	
	printf("%d\t",getMin(stack1));
	printf("%d\t",pop(stack,stack1));
	printf("%d\t",pop(stack,stack1));
	printf("%d\t",pop(stack,stack1));
	//printf("%d\t",pop(stack,stack1));
	printf("%d\t",getMin(stack1));
	return 0;
}