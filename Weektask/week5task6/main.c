#include <stdio.h>
#include <stdlib.h>
float funkcja(int n)
{
    return n+50;
}
float funkcja2(int n)
{
    return n*2-10;
}
int cl(float(*f1)(int),float(*f2)(int),int n)
{
    for(int i=0;i<n;i++)
    {
        int result=f1(i)-f2(i);
        if(result>=10)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n=20;
    int wynik=cl(funkcja,funkcja2,n);
    printf("%d",wynik);
}
