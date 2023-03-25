#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,m;
   printf("Podaj dwie liczby calkowite\n");
   scanf("%d%d",&n,&m);
   if(n<m)
   {
       int suma=1;
       for(int i=n;i<=m;i++)
       {
           suma*=i;
       }
       printf("%d",suma);
   }
}
