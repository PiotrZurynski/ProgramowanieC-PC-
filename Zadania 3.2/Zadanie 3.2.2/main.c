#include <stdio.h>
#include <stdlib.h>
int *mniejszy_ale_wskaznik(int*a,int*b)
{
    if (*a<*b)
    {
        return a;
    }
    else
    {
       return b;
    }

}
int main()
{
   int n=5;
   int x=4;
   printf("%d\n",&n);
   printf("%d\n",&x);
   int wynik=mniejszy_ale_wskaznik(&n,&x);
   printf("%d",wynik);

}
