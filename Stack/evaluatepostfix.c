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
int isDigit(char c)
{
	if(c>='0' && c<='9')
		return 1;
	return 0;
}

int main()
{
	char c[]="231*+9-";
	struct Stack* stack=creatStack(6);
	int i;
	for(i=0;c[i]!='\0';i++)
	{
		if(isDigit(c[i])){
			//printf("%d\n",c[i]-'0');
			int f=c[i]-'0';
			push(f,stack);}
		else
		{
			int t=pop(stack);
			int z=pop(stack);
			//printf("%d\t%d",t,z );
			switch(c[i])
			{
				case '+':
					push(t+z,stack);
					break;
				case '*':
					push(t*z,stack);
					break;
				case '-':
					push(z-t,stack);
					break;
				case '/':
					push(z/t,stack);
					break;
			}
		}
	}
	printf("%d",pop(stack));
	return 0;
}