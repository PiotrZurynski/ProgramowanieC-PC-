#include <stdio.h>
#include <stdlib.h>
int funkcja1(int n)
{
    return n*2;
}
int funkcja2(int n)
{
   return n+6;
}
int lul(int(*f1)(int),int(*f2)(int),int n)
{
    for(int i=0;i<n;i++)
    {
        if((f1(i)+f2(i))%2!=0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n=13021;
    int wynik=lul(funkcja1,funkcja2,n);
    printf("%d",wynik);
}
