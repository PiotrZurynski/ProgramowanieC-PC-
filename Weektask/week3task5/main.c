#include <stdio.h>
#include <stdlib.h>
int niven(int n)
{
    int zmienna=n;
    int reszta=0;
    while(zmienna!=0)
    {
        reszta=zmienna%10+reszta;
        zmienna/=10;
    }
    return reszta;
}
void niv(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i%niven(i)==0)
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int a=12;
    int wynik=niven(a);

    printf("%d",wynik);
     printf("\n");
    niv(100);
}
