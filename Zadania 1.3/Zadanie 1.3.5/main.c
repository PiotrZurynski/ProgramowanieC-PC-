#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Witam cie czlowieku\n");
    printf("Jak chcesz liczyc pole trojkata\n");
    printf("Jesli poprzez boki trojkata to wybierz:1\n");
    printf("Jesli przez dlugosc i wysokosc to wybierz:2\n");
    scanf("%d",&x);
    if(x==1)
    {
        printf("Wybrales opcje 1\nPodaj dlugosci bokow trojkata\n");
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        int pole;
        pole=(a+b+c)/2;
        printf("Pole trojkata wynosi:%d",pole);
    }
    if(x==2)
    {
        printf("Wybrales opcje 2\nPodaj dlugosc boku i wysokosc trojkata\n");
        int a,h;
        scanf("%d%d",&a,&h);
        int pole;
        pole=(a*h)/2;
        printf("Pole trojkata wynosi:%d",pole);
    }
}
