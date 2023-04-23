#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double funkcja(double x)
{
    return sqrt(x);
}
double funkcja2(double x)
{
    return x*x;
}
double spoiwo( double(*f1)(double),double(*f2)(double),double x)
{
    double fx=f1(x);
    double fx2=f2(x);
    return fx-fx2;
}

int main()
{
   double a=2.0;
   double wynik=spoiwo(funkcja,funkcja2,a);
   printf("%f\n",wynik);
   double t=110.0;
   double wynik1=spoiwo(funkcja,funkcja2,t);
   printf("%f",wynik1);
}
