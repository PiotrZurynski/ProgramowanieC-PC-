#include <stdio.h>
#include <stdlib.h>
int suma(const int*a,const int*b)
{
    return*a+*b;
}
int main()
{
   int x=40;
   int y=5;
   int wynik=suma(&x,&y);
   printf("%d",wynik);
}
