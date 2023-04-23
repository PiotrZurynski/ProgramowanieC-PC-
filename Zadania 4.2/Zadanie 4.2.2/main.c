#include <stdio.h>
#include <stdlib.h>
double srednia(unsigned int n, int tab[])
{
    double suma=0;
    for(int i =0;i<n;i++)
    {
        suma+=tab[i];
    }
    double srednia=suma/n;
    return srednia;

}
int suma(unsigned int n, int tab[])
{
    int suma=0;
    for(int i =0;i<n;i++)
    {
        suma+=tab[i];
    }
    return suma;

}
int sumakwadratow(unsigned int n,int tab[])
{
    int suma=0;
    for(int i =0;i<n;i++)
    {
        suma+=tab[i]*tab[i];
    }
    return suma;
}
int main()
{

    int tab[] = {1, 2, 3, 4, 5};
    double wynik=srednia(5,tab);
    printf("%.2f\n",wynik);
    int wynik1=suma(5,tab);
    printf("%d\n",wynik1);
    int wynik2=sumakwadratow(5,tab);
    printf("%d",wynik2);

}
