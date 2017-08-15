#include<stdio.h>

void sort(int a[],int l,int h,int n)
{
    int t,i,start=0,end=n-1;
    for(i=0;i<=end;)
    {
        if(a[i]<l)
        {
            t=a[i];
            a[i]=a[start];
            a[start]=t;
            start++;
            i++;
        }
        else if(a[i]>h)
        {
            t=a[i];
            a[i]=a[end];
            a[end]=t;
            end--;
        }
        else
            i++;
    }
}
int main()
{
    int i,a[]={1, 14, 5, 20, 4, 2, 54, 20, 87,
                98, 3, 1, 32};
    int n=sizeof(a)/sizeof(int);
    sort(a,10,20,n);
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
