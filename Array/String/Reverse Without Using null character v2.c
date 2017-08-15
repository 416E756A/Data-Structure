#include<stdio.h>
#define size1(type) (char *)(&type+1)-(char *)(&type)

int main()
{
    char a[100]={'\0'},i=1;

    while(scanf("%c",&a[i++])!=-1);

    i--;
    //int t=i;
    for(;i>=0;i--)
        printf("%c",a[i]);
    int t;
    printf("\n%d",size1(t));
    return 0;
}
