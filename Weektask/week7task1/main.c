#include <stdio.h>
#include <stdlib.h>
int *zwroc(int n,int tab[])
{
    int *temp=malloc(n*sizeof(int));
    int i;
    for(i=0;i<sizeof(tab);i++)
    {
        temp[i]=tab[i];
    }
    return temp;
}
int main()
{
    int n=10;
    int tab[n];
    int *wynik=zwroc(n,tab);
    printf("%d",wynik);

}
