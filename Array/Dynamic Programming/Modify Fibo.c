#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int lookup[100];
void initialise(int n)
{
    int i;
    for(i=0;i<n;i++)
        lookup[i]=NULL;
}
int fib(int n)
{
    if(lookup[n]==NULL)
    {
        if(n<=1)
            lookup[n]=n;
        else
            lookup[n]=fib(n-1)+fib(n-2);
    }
    return lookup[n];
}
int main(void)
{
    int n=10;
    initialise(n);
    printf("%d",fib(n));
    return 0;
}
