#include<stdio.h>
int check()
{
    char text[]="nematode knowledge";
    char p[]="nano";
    while(*text!='\0')
        if(*p==*text++ && *++p=='\0')
            return 1;
    return 0;

}
int main()
{
    printf("%d",check());
    return 0;
}
