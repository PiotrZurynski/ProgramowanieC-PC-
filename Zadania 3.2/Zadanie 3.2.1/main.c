#include <stdio.h>
#include <stdlib.h>
void mniejsza(int *a,int*b)
{
    if(*a<*b)
    {
       printf("%d",*a);
    }
    else
    {
        printf("%d",*b);
    }
}
int main()
{
   int n=4;
   int x=5;
   mniejsza(&n,&x);
}
