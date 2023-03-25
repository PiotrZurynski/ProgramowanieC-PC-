#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Podaj dwie liczby calkowite\n");
   int n,m;
   scanf("%d%d",&n,&m);
   for(int i=n;i<m;i+=n)
   {
       printf("%d\n",i);
   }
}
