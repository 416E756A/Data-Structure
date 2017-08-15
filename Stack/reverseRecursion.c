#include<stdio.h>
#include<stdlib.h>
struct Stack
{
	char *a;
	int top;
	int capacity;
};
struct Stack* creatStack(int capacity)
{
	struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
	
	stack->top=-1;
	stack->capacity=capacity;
	stack->a=(char*)malloc(stack->capacity*sizeof(char));
	return stack;
}
void push(char data,struct Stack* stack)
{
	stack->a[++stack->top]=data;
}
char pop(struct Stack* stack)
{
	return stack->a[stack->top--];
}
void insertatBot(char c,struct Stack* stack)
{
	stack->a[++stack->top]=c;
}
void reverse(struct Stack* stack)
{
	if(stack->top==-1)
		return;
	char t=pop(stack);
	reverse(stack);
	insertatBot(t,stack);
}
int main()
{
	char c[]="Anuj";
	struct Stack* stack=creatStack(4);
	int i;
	for(i=0;c[i];i++)
		push(c[i],stack);
	reverse(stack);
	while(stack->top!=-1)
		printf("%c",pop(stack) );
	return 0;
}