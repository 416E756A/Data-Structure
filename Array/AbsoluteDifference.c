#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> m;
    int p=7;
    int a[]={10,5,3,9,2};
    int i,n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++)
        m.insert(abs(p-a[i]),a[i]);
    for(auto it=m.begin();it!=m.end();it++)
        a[i++]=(*it).second();
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
