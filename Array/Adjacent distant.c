#include<stdio.h>
int main()
{
    int i,a[]={1,2,1};
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++)
        a[i]=a[i]-1;
    for(i=0;i<n;i++)
        a[a[i]%n]=a[a[i]%n] + n;
    for(i=0;i<n;i++)
        printf("%d\t%d\n",i+1,a[i]/n);

    int max=a[0]/n;
    for(i=1;i<n;i++)
        if(max<a[i]/n)
            max=a[i]/n;
    printf("%d",max);
    if(max<=(n+1)/2)
        printf("Yes");
    else
        printf("No");
    return 0;
}
