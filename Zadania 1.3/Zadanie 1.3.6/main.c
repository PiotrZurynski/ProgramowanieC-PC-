#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c; /*zmienne do wspolczynnikow*/
    int d,e,f; /*zmienne do wspolczynnikow*/
    int x,y;   /*zmienne do policzenia*/
    printf("Podaj wspolczynniki ax+by=c\n");
    printf("Podaj a:");
    scanf("%d",&a);
    printf("Podaj b:");
    scanf("%d",&b);
    printf("Podaj c:");
    scanf("%d",&c);
    printf("Podaj wspolczynniki dx+ey=f\n");
    printf("Podaj d:");
    scanf("%d",&d);
    printf("Podaj e:");
    scanf("%d",&e);
    printf("Podaj f:");
    scanf("%d",&f);
    int wyznacznik=(a*e)-(d*b);
    if(wyznacznik!=0)
    {
        printf("Znajda tu sie rozwiazania wyznacznik rowny:%d",wyznacznik);
        double wyznacznikx=(c*e)-(f*b);
        double wyznaczniky=(a*f)-(d*c);
        double suma=wyznacznikx/wyznacznik;
        double suma1=wyznaczniky/wyznacznik;
        printf("\nRozwiazaniem ukladu jest x rowny %.2f oraz y rowny %.2f",suma,suma1);

    }
    else
    {
        printf("Oj tutaj rozwiazan nie bedzie:%d",wyznacznik);
    }
}
