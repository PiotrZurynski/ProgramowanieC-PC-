#include <stdio.h>
#include <stdlib.h>
int rekur(unsigned int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 2;
    }
    if(n%2==0)
    {
        return rekur(n-2)+1;
    }
    if(n%2!=0)
    {
        return rekur(n-2)*3;
    }
}
int main()
{
    int a=6;
    int wynik=rekur(a);
    printf("%d",wynik);
    printf("\n");
    int b=2;
    int wynik1=rekur(b);
    printf("%d",wynik1);
}
