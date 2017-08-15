#include<stdio.h>
// void f(int p)
// {
//   static int i=p;
//   printf("%d\n",i);
// }

int main()
{
  int i,j;
  for(i=0,j=8;i<8&&j>5;i++,j--)
    printf("%d\t%d\n",i,j );
  return 0;
}
