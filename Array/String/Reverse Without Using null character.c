#include<stdio.h>
int main()
{
    char a[100],i=1;
    scanf("%c",&a[0]);
    while(1)
    {
        scanf("%c",&a[i]);
        if(a[i]=='q')
            break;
        i++;

    }
    i--;
    int t=i;
    for(;i>=0;i--)
        printf("%c",a[i]);
    return 0;
}
