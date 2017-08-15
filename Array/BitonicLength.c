#include<stdio.h>>
int main()
{
    int a[]={12,4,78,90,45,23};
    int n=sizeof(a)/sizeof(int);
    int i,j,inc[n],dec[n];

    inc[0]=1;
    dec[n-1]=1;

    for(i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
            inc[i]=inc[i-1]+1;
        else
            inc[i]=1;
    }
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>=a[i+1])
            dec[i]=dec[i+1]+1;
        else
            dec[i]=1;
    }

    int max=inc[0]+dec[0];
    for(i=1;i<n;i++)
    {
        if(max<dec[i]+inc[i])
            max=dec[i]+inc[i];
    }
    printf("%d",max-1);
    return 0;
}
