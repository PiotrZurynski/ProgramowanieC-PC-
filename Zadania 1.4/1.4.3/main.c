#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    printf("Podaj 3 dodatnie liczby calkowite\n");
    scanf("%d%d%d",&n,&m,&k);
    for(int i=n;i<k;i+=n)
    {
        if(i>m)
        {
            printf("%d",i);
        }
    }
}
