#include<stdio.h>

void sum(int a[],int l,int r,int s)
{
	//int sum=0;
	if(l>r){
		printf("%d\n",s);
		return;
	}
	sum(a,l+1,r,s+a[l]);
	sum(a,l+1,r,s);
}
int main(void)
{
	int a[]={2,4,5};
	sum(a,0,2,0);
	return 0;
}