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
	stack->top=-1;
	stack->capacity=capacity;
	stack->a=(char*)malloc(sizeof(char));
	return stack;
}
void push(char data,struct Stack* stack)
{
	stack->a[++stack->top]=data;
}
void pop(struct Stack* stack)
{
	char c=stack->a[stack->top];
	--stack->top;
	printf("%c",c);
}
int isEmpty(struct Stack* stack)
{
	return stack->top==-1;
}
int isFull(struct Stack* stack)
{
	return stack->top==stack->capacity-1;
}
char Checktop(struct Stack* stack)
{
	return stack->a[stack->top];
}
int isOperand(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		return 1;
	return 0;
}
int precedence(char c)
{
	if(c=='+' || c=='-')
		return 1;
	else if(c=='*' || c=='/')
		return 2;
	else if(c=='^')
		return 3;
	return -1;
}
int main()
{
	char infix[]="a+b*c";
	int n=sizeof(infix)/sizeof(char);
	//printf("%d\n",n);
	struct Stack* stack=createStack(n);
	int i;
	for(i=0;infix[i]!='\0';i++)
	{
		if(isOperand(infix[i]))
			printf("%c",infix[i]);
		else if(infix[i]=='(')
			push('(',stack);
		else if(infix[i]==')')
		{
			while(Checktop(stack)!='(' && (!isEmpty(stack)))
				pop(stack);
			if(!isEmpty(stack) && stack->a[stack->top]!='(')
				break;
			pop(stack);
		}
		else
		{
			while(!isEmpty(stack) && precedence(infix[i])<=precedence(stack->a[stack->top]))
				pop(stack);
			push(infix[i],stack);
		}
		if(i==n-1)
			printf("\nReached end of string.\n");
	}
	while(!isEmpty(stack))
		pop(stack);
	return 0;
}