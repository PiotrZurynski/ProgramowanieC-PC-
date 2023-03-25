#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj dwie liczby calkowite\n");
    scanf("%d%d",&n,&m);
    while(n!=m)
    {
        if(n>m)
        {
            n-=m;
        }
        else
        {
            m-=n;
        }
    }
    printf("%d",n);
}
