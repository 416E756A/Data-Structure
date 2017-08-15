#include<stdio.h>
int main()
{
	int a[]={1,2,4,7,5,6,3};
	int i,n=7;
	int swapped;
	do
	{
		swapped=0;

		for(i=1;i<n;i++)
		{
			if(a[i-1]>a[i])
			{
				int t=a[i-1];
				a[i-1]=a[i];
				a[i]=t;
				swapped=1;
			}
		}
	}while(swapped==1);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}