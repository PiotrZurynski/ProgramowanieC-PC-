#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj dwie liczby calkowite\n");
    scanf("%d%d",&n,&m);
    for(int i=m;i<=n;i+=m)
    {
        printf("%d\n",i);
    }
}
