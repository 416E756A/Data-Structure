#include<stdio.h>
void shifttoFirst(int a[],int index,int n)
{
    int i,t=a[index];
    for(i=index;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=t;
}
int main()
{
    int a[]={12,11,-13,-5,6,-7,5,-3,-6};
    int i,n=sizeof(a)/sizeof(int);
    for(i=0;i<n;)
    {
        if(a[i]<0)
            shifttoFirst(a,i,n);
        else
            i++;
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
