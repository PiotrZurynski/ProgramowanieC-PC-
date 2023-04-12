#include <stdio.h>
#include <stdlib.h>
int zmienna(int n,int *w)
{
    *w=n;
    return *w;
}
int main()
{
    int x=4;
    int y=0;
    int wynik=zmienna(x,&y);
    printf("%d",wynik);

}
