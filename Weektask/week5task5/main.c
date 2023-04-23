#include <stdio.h>
#include <stdlib.h>
int funkcja1(int n)
{
    return n+5;
}
int funkcja2(int n)
{
    return n*2;
}
int wsk(int(*f1)(int),int(*f2)(int),int n)
{
    for(int i=0;i<n;i++)
    {
        if((f1(i)*f2(i))%3!=0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
   int n=21;
   int wynik=wsk(funkcja1,funkcja2,n);
   printf("%d",wynik);
}
