#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int funkcja1(int x)
{
   if(x>2)
   {
       return x*2;
   }
   else
   {
       return x;
   }
}
int funkcja2(int x)
{
     return x;
}
int funck(int (*f1)(int),int (*f2)(int),int n)
{
    for(int i=1;i<=n;i++)
    {
        if(f1(i)!=sqrt(pow(f2(i),2)))
        {
            return -2;
        }
    }
    return 2;
}
int main()
{
    int a=1;
    int wynik=funck(&funkcja1,&funkcja2,a);
    printf("%d",wynik);
    printf("\n");
    int b=2;
    int wynik1=funck(funkcja1,funkcja2,b);
    printf("%d",wynik1);
}
