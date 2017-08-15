#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	char *a;
	int top;
	int capacity;
};
struct Stack* createStack(int capacity)
{
	struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity=capacity;
	stack->top=-1;
	stack->a=(char*)malloc(stack->capacity*sizeof(char));
	return stack;	
}
void push(char data,struct Stack* stack)
{
	stack->a[++stack->top]=data;
}
void pop(struct Stack* stack)
{
	printf("%c", stack->a[stack->top--]);
}

int main()
{
	char c[]="Anuj";
	struct Stack* stack=createStack(4);
	int i;
	for(i=0;c[i]!='\0';i++)
	{
		push(c[i],stack);
	}
	for(i=0;stack->top!=-1;i++)
		pop(stack);
	return 0;
}