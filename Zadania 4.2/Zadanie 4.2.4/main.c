#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double srednia(unsigned int n, unsigned int tab[])
{
    double zmienna=1;
   for(int i=0;i<n;i++)
   {
       zmienna*=tab[i];
   }
   return pow(zmienna,1.0/n);
}
int main()
{
    unsigned int tab[]={1,2,3,4,5};
    double wynik=srednia(5,tab);
    printf("%lf",wynik);

}
