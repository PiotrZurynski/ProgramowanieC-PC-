#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Podaj liczbe calkowita");
   scanf("%d",&n);
   int pierwiastek=0;
   for(int i =1;i<=n;i++)
   {
       if(i*i<=n)
       {
         pierwiastek=i;
       }
   }
   printf("%d",pierwiastek);

}
