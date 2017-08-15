#include<stdio.h>
int main()
{
	char c[]="Programming";
	int i,j;
	for(i=0;c[i]!='\0';i++)
	{
		for(j=i+1;c[j]!='\0';j++){
			if(c[i]>c[j])
			{
				char t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	printf("%s\n",c );
	return 0;
}