#include <stdio.h>
#include <stdlib.h>

void suma(int n)
{
    int suma=0;
    for(int i=0;i<=n;i++)
    {
        suma+=(i*i);
    }
    printf("%d",suma);
}
int main()
{
    int n;
    printf("Podaj liczbe n");
    scanf("%d",&n);
    suma(n);
}
