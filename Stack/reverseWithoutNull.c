#include<stdio.h>

int main()
{
	char c[]="Anuj";
	int n=0,i;
	for(i=0;c[i];i++)
		n+=1;
	for(i=n-1;i>=0;i--)
		printf("%c",c[i]);
	return 0;
}