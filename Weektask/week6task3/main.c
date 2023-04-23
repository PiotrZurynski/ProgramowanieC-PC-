#include <stdio.h>
#include <stdlib.h>
void mediana (int tab[], int n)
{
    float mediana;
    if (n%2 == 0)
    {
        mediana = tab[(n-1)/2]+tab[n/2];
        mediana = mediana/2;
    }
    else
    {
        mediana = tab [n/2];
    }
    printf("%f",mediana);
}
int main()
{
    int n=6;
    int tab[]={6,5,4,3,2,1};
    mediana(tab,n);
}
