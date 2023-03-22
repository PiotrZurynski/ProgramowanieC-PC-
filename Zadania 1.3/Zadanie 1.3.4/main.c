#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    int zmienna,zmienna1;
    if(a>=0&&b>=0)
    {
        zmienna=a;
        zmienna1=b;
    }
    if(a<0&&b<0)
    {
        zmienna=-a;
        zmienna1=-b;
    }
    if(a>0&&b<0)
    {
        zmienna=a;
        zmienna1=-b;
    }
    if(a<0&&b>0)
    {
        zmienna=-a;
        zmienna1=b;
    }

    if(zmienna>zmienna1)
    {
        printf("%d",zmienna);
    }
    if(zmienna<zmienna1)
    {
        printf("%d",zmienna1);
    }
    if(zmienna==zmienna1)
    {
        printf("%d",zmienna);
    }
}

