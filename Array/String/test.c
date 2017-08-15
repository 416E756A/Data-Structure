#include<stdio.h>
int main()
{
	const int a=10;
	int *p=&a;
	printf("%d\n",a);
	*p=100;
	printf("%d",a);

	return 0;
}
