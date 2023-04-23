#include <stdio.h>
#include <stdlib.h>
int funkcja(int n)
{
    return n;
}
int funkcja2(int n)
{
    return n*n;
}
int superzabawa(int(*f1)(int),int(*f2)(int),int n)
{
    int fx=f1(n);
    int fx2=f2(n);
    if(fx>fx2)
    {
        return fx;
    }
    return fx2;
}
int main()
{
    int n=12;
    int wynik=superzabawa(funkcja,funkcja2,n);
    printf("%d",wynik);
}
