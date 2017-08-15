#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a[]={4, 2, 1, 8};
    int n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
int                 t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    int sum=0;
    for(i=0;i<n;i=i++)
    {
        sum+=abs(a[i]-a[n-i-1]);
    }
    printf("%d",sum);
    return 0;
}
