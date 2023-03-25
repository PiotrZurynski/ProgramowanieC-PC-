#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Podaj liczbe calkowita najlepiej nieujemna");
   scanf("%d",&n);
   if(n==0)
   {
       printf("%d",n);
   }
   if(n==1)
   {
       printf("%d",n);
   }
   if(n>1)
   {
       int suma=0;
       int sumka=1;
       for(int i=2;i<=n;i++)
       {
           int m=suma+sumka;
           suma=sumka;
           sumka=m;
       }
       printf("%d",sumka);
   }
}
