#include <stdio.h>
#include <stdlib.h>
void min(int*a,int*b,int*c)
{
    if(*a<*b)
    {
        *c=*a;
    }
    else
    {
        *c=*b;
    }
}
int main()
{
    int a=-12;
    int b=-3;
    int c;
    min(&a,&b,&c);
    printf("%d",c);
}
