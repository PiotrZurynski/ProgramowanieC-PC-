#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Kalkulator\nWybierz tryb\nDodawanie wybierz:1\nOdejmowanie wybierz:2\nMnozenie wybierz:3\nDzielenie wybierz:4\n");
   int x;
   scanf("%d",&x);
   if(x==1)
   {
       double a,b;
       printf("Podaj dwie wartosci do dodania\n");
       scanf("%lf%lf",&a,&b);
       double suma=a+b;
       printf("Wynik dodawania:%.2f",suma);
   }
   if(x==2)
   {
       double a,b;
       printf("Podaj dwie wartosci do odejmowania\n");
       scanf("%lf%lf",&a,&b);
       double suma=a-b;
       printf("Wynik odejmowania:%.2f",suma);
   }
   if(x==3)
   {
       double a,b;
       printf("Podaj dwie wartosci do mnozenia\n");
       scanf("%lf%lf",&a,&b);
       double suma=a*b;
       printf("Wynik mnozenia:%.2f",suma);
   }
   if(x==4)
   {
       double a,b;
       printf("Podaj dwie wartosci do dzielenia\n");
       scanf("%lf%lf",&a,&b);
       double suma=a/b;
       printf("Wynik dzielenia:%.2f",suma);
   }

}
