#include <stdio.h>
#include <stdlib.h>
int *odwrot(int n, int tab[])
{
    int*copy=malloc(n*sizeof(int));
    int i;
    for(i=n-1;i>=0;i--)
    {
        copy[n-i-1]=tab[i];
        return copy;
    }


}
int main()
{
   int n=5;
   int tab[]={1,2,3,4,5};
   int *wynik=odwrot(n,tab);
   printf("%d",wynik);
}
