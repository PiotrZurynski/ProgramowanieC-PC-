#include <stdio.h>
#include <stdlib.h>
int *week(int n,int tab[])
{
    int ilosc_parzystych=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(tab[i]%2==0)
        {
            ilosc_parzystych++;
        }
    }
    int*copy=malloc(ilosc_parzystych*sizeof(int));
    int j=0;
    for(i=0;i<n;i++)
    {
        if(tab[i]%2==0)
        {
           copy[j]=tab[i];
            j++ ;
        }
    }
    if(ilosc_parzystych==0)
    {
        return NULL;
    }
    else
    {
        return copy;
    }
}
int main()
{
   int n=5;
   int tab[]={1,2,3,4,5};
   int *wynik=week(n,tab);
   printf("%d",wynik);
   free(wynik);
}
