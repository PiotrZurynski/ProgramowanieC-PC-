#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe calkowita n:");
    scanf("%d",&n);
    if(n>2)
    {
        if(n%2==0)
        {
        int suma=1;
        for(int i =2;i<=n;i++)
        {
            if(i%2==0)
            {
                suma*=i;
            }
        }
        printf("%d",suma);
        }
        if(n%2==1)
        {
            int suma=1;
            for(int i=2;i<n;i++)
            {
                if(i%2==0)
            {
                suma*=i;
            }
            }
        printf("%d",suma*(n-1));
        }
    }
}
