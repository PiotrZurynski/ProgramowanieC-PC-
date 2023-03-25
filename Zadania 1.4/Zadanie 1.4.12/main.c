#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool pierwsza(int n)
{
    if(n<2)
    {
        return false;
    }
    for (int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
void mniejszeodn(int n)
{
    int suma=0;
    for(int i=1;i<n;i++)
    {
        if(pierwsza(i))
        {
            suma+=i;
             printf("%d,",i);
        }
    }
    printf("\n%d",suma);
}
int main()
{
   int n;
   printf("Podaj liczbe n");
   scanf("%d",&n);
   mniejszeodn(n);
}
