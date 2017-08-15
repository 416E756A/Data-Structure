#include<stdio.h>
#define MAXSIZE 100
int top=-1;
int a[MAXSIZE];

void push(int data)
{
	int i;
	if(top==MAXSIZE-1)
		printf("Stack Full\n");
	else
	{
		for(i=top+1;i>=0;i--)
			a[i]=a[i-1];
		a[0]=data;
		top++;
	}
}
void pop()
{
	int i;
	printf("%d Deleted \n",a[0]);
	for(i=0;i<=top;i++)
		a[i]=a[i+1];
	top--;
}
void Display()
{
	int i=0;
	for(;i<=top;i++)
		printf("%d\t",a[i]);
}
int main(void)
{
	int ch,data;
	while(1)
	{
		printf("1.Push \n2.Pop\n3.Display\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data : ");
				scanf("%d",&data);
				push(data);
				break;
			case 2:
				pop();
				break;
			case 3:
				Display();
				break;
		}

	}
	return 0;
}