#include <stdio.h>
#include <stdlib.h>
int funkcja(int n,int m,int k)
{
    if(m%n==0&&m%k==0)
    {
        return 2;
    }
    if(m%n==0||m%k==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,c;
    a=9;
    b=6;
    c=5;
    int wynik=funkcja(a,b,c);
    printf("%d",wynik);
}
