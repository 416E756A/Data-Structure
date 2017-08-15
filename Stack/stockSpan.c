#include<stdio.h>
int main()
{
	int a[]={10, 4, 5, 90, 120, 80};
	int i,n=6;
	for(i=n-1;i>=0;i--)
	{
		int j=i,c=0;
		for(;j>=0;j--)
			if(a[i]>=a[j])
				c+=1;
			else
				break;
		printf("%d\n",c);
	}
	return 0;
}