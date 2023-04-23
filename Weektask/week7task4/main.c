#include <stdio.h>
#include <stdlib.h>
double *srednia(int n,double tab[])
{
    double srednia=0;
    double suma=0;
    int ilosc_wiekszych=0;
    for(int i=0;i<n;i++)
    {
        suma+=tab[i];
    }
    srednia=suma/n;
    for(int i=0;i<n;i++)
    {
        if(tab[i]>srednia)
        {
            ilosc_wiekszych++;
        }
    }
    double *copy=malloc(ilosc_wiekszych*sizeof(double));
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(tab[i]>srednia)
        {
            copy[j]=tab[i];
            j++;
        }
    }

    return copy;
}
int main()
{
   int n=5;
   double tab[]={2.5,3.5,4.5,5.5,6.5};
   double *wynik=srednia(n,tab);
   printf("%d",wynik);
   free(wynik);
}
