#include <stdio.h>
#include <stdlib.h>
int zmienna(int *n)
{
    int zmienna=*n;
    int wynik=0;
    while(zmienna!=0)
    {
        wynik=wynik+zmienna%10;
        zmienna/=10;
    }
    return wynik;
}
int main()
{
    int a=999;
    int wynik=zmienna(&a);
    printf("%d",wynik);
}
