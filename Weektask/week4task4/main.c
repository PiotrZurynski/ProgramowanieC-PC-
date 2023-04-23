#include <stdio.h>
#include <stdlib.h>
int cos(int *a,int*b)
{
    return *a+*b;
}
int main()
{
   int a=5;
   int b=10;
   int wynik=cos(&a,&b);
   printf("%d",wynik);
}
