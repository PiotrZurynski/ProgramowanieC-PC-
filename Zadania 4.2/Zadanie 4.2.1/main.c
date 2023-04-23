#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void zero(unsigned int n, int tab[]) {
    for (int i = 0; i < n; i++)
    {
        tab[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");
}
void indeks(unsigned int n, int tab[])
{

     for (int i = 0; i < n; i++)
    {
        tab[i]=i;
        printf("%d", tab[i]);
    }
    printf("\n");
}
void podwoj(unsigned int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=i*2;
        printf("%d",tab[i]);
    }
    printf("\n");
}
void abse(unsigned int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i]=abs(i);
        printf("%d",tab[i]);
    }
    printf("\n");
}
int main() {
    unsigned int n=5;
    int tab[n];
    zero(n, tab);
    indeks(n,tab);
    podwoj(n,tab);
    abse(n,tab);
}
