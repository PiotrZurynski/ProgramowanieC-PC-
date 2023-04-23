#include <stdio.h>
#include <stdlib.h>
int funkcja1(int n)
{
    return n;
}
int funkcja2(int n)
{
    return n*n;
}
int ilo(int(*f1)(int),int (*f2)(int),int n)
{
    int fx=f1(n);
    int fx2=f2(n);
    return fx*fx2;
}
int main()
{
    int n=2;
    int wynik=ilo(funkcja1,funkcja2,n);
    printf("%d\n",wynik);
    int n1=22;
    int wynik1=ilo(funkcja1,funkcja2,n1);
    printf("%d",wynik1);
}
