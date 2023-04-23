#include <stdio.h>
#include <stdlib.h>
int pal(int n)
{
    int zmienna=n;
    int reszta;
    int odwrocenie=0;
    while(zmienna!=0)
    {
        reszta=zmienna%10;
        odwrocenie=odwrocenie*10+reszta;
        zmienna/=10;
    }
    return odwrocenie;
}
int main()
{
    int n=545;
    int wynik=pal(n);
    if(wynik==n&&n>0)
    {
        printf("pal");
    }
    else
    {
        printf("nie pal");
    }
}
