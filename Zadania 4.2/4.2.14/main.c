#include <stdio.h>
#include <stdlib.h>
double *funkcja(unsigned int n)
{
    double *dynam=malloc(n*(sizeof(double)));
    return dynam;
}
int main()
{
    int n=5;
    int wynik=funkcja(n);
    printf("%d",wynik);
}
