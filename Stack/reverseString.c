#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	char **a;
	int top;
	int capacity;
};
struct Stack* createStack(int capacity)
{
	struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
	stack->top=-1;
	stack->capacity=capacity;
	stack->a=malloc(capacity*sizeof(int*));
	int i;
	for(i=0;i<capacity;i++)
	{
		stack->a[i]=malloc(10*sizeof(int));
	}
	return stack;
}
void push(char b[],struct Stack* stack)
{
	strcpy(stack->a[++stack->top],b);
	//printf("%s\n",stack->a[stack->top]);
	//printf("top=%d\n",stack->top );
}
void pop(struct Stack* stack)
{
	printf("%s",stack->a[stack->top]);
	stack->a[stack->top]='\0';
	stack->top--;
	//printf("top=%d\n",stack->top );
}
void display(struct Stack* stack)
{
	int i;
	for(i=stack->top;i>=0;i--)
		printf("%s\n",stack->a[i]);
}
int main()
{
	int ch;
	struct Stack* stack=createStack(100);
	char t[20];
	while(1)
	{
		printf("1.push\n2.pop\n3.display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter : \n");
				scanf("%s",t);
				push(t,stack);
				break;
			case 2:
				pop(stack);
				break;
			case 3:
				display(stack);
				break;
		}
	}
}