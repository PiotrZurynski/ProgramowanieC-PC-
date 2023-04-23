#include <stdio.h>
#include <stdlib.h>
int pal(int n)
{
    int zmienna=n;
    int reszta;
    int odwrocenie=0;
    while(zmienna!=0)
    {
       reszta=zmienna%10;
       odwrocenie=odwrocenie*10+reszta;
       zmienna/=10;
    }
    return odwrocenie;
}
int main()
{
   int a=230;
   int b=32;
   int wynik=pal(a);
   printf("%d",wynik);
   if(wynik==b)
   {
       printf("pal");
   }
   else
   {
       printf("nie pal");
   }
}
