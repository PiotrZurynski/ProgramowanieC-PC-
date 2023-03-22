#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   printf("Wybierz co chcesz obliczyc\n");
   printf("Pole kwadratu wybierz:1\nPole prostok¹ta wybierz:2\nPole trojkata wybierz:3\n");
   scanf("%d",&x);
   if(x==1)
   {
       printf("Podaj mi dlugosc boku kwadratu:");
       int a;
       scanf("%d",&a);
       int pole=a*a;
       printf("Pole kwadratu wynosi:%d",pole);
   }
   if(x==2)
   {
       printf("Podaj mi dwie dlugosci prostokata\n");
       int a,b;
       scanf("%d%d",&a,&b);
       int pole=a*b;
       printf("Pole prostokata wynosi:%d",pole);
   }
   if(x==3)
   {
       printf("Wybierz sposob w jaki chcesz obliczyc pole trojkata\n");
       printf("Jezeli poprzez dlugosc i wysokosc wybierz:1\nJezeli poprzez 3 boki wybierz:2\n");
       int y;
       scanf("%d",&y);
       if(y==1)
       {
           double a,h;
           printf("Podaj dlugosc:");
           scanf("%lf",&a);
           printf("Podaj wysokosc:");
           scanf("%lf",&h);
           double pole=(a*h)/2;
           printf("Pole wynosi:%.2f",pole);
       }
       if(y==2)
       {
           double a,b,c;
           printf("Podaj 3 dlugosci bokow\n");
           scanf("%lf%lf%lf",&a,&b,&c);
           double pole=(a+b+c)/2;
           printf("Pole wynosi:%.2f",pole);
       }
   }

}
