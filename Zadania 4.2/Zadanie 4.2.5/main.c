#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int pierwsza(unsigned int n)
{
    int i,j,pom;
    bool *sito=malloc(n*sizeof(bool));
    for(i=0;i<n;i++)
    {
        sito[i]=true;
    }
    for(i=2;i<n;i++)
    {
        if(sito[i])
        {
            pom=i;
            for(j=2*i;j<n;j+=i)
            {
                sito[j]=false;
            }
        }
    }
    free(sito);
    return pom;
}
int main()
{
    int n = 100;
    int wynik = pierwsza(n);
    printf("Najwiêksza liczba pierwsza mniejsza od %d to %d\n", n, wynik);
}
