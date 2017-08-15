#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char *a,char b[])
{
	int n=2,i;
	for(i=0;i<n;i++)
	{
		if(a[i]>b[i])
			return 1;
		else if(a[i]<b[i])
			return -1;
	}
	return 0;
}

int main(void)
{
	char a[20][20];
	int i,j;
	char temp[20];
	int n;
	//printf("%d\n",n);
	/*printf("%s\n",a[0] );
	printf("%s\n",a[1] );
	printf("%s\n",a[2] );*/
	//strcpy(a[0],a[1]);
	//printf("%s",a[0]);
/*
	strcpy(temp,a[i]);
	strcpy(a[i],a[j]);
	strcpy(a[j],temp);
	printf("%s\t%s",a[i],a[j]);
	*/

	puts("Enter the no. of string to be sorted");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
      gets(a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}

		}
	}
	//printf("%s\n",a);
	for(i=0;i<=n;i++)
		puts(a[i]);
}