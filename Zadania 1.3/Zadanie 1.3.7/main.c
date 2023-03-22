#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   double x1,x2;
   printf("Podaj wspolczynniki rownania kwadratowego ax^2+bx+c=0\n");
   scanf("%d%d%d",&a,&b,&c);
   double delta=(b*b)-(4*a*c);
   if(delta<0)
   {
       printf("Brak rozwiazan");
   }
   else
   {
       x1=(-b+sqrt(delta))/(2*a);
   x2=(-b-sqrt(delta))/(2*a);
   printf("wynik to%.2f oraz %.2f",x1,x2);
   }
}
