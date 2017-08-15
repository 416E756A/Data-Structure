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
	stack->a=(char*)malloc(stack->capacity*sizeof(int));
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
int matchPair(char c,char d)
{
	if(c=='(' && d==')')
		return 1;
	else if(c=='{' && d=='}')
		return 1;
	else if(c=='[' && d==']')
		return 1;
	return 0;
}
int main()
{
	int i;
	char c[]="{()}[]";
	struct Stack* stack=creatStack(sizeof(c)/sizeof(char));
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]=='(' || c[i]=='{' || c[i]=='[')
			push(c[i],stack);
		else
			if(!matchPair(pop(stack),c[i]))
				printf("%s\n","Not Balanced");
		//printf("%c\t",c[i] );
	}
	printf("%s\n","Balanced" );
}