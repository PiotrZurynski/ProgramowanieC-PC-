#include <stdio.h>
#include <stdlib.h>
double srednia(unsigned int n,const int tab[])
{
    double suma=0;
    for(int i =0;i<n;i++)
    {
        suma+=tab[i];
    }
    double srednia=suma/n;
    return srednia;


}
int main()
{
  int tab[]={1,2,3,4,5};
  double wynik=srednia(5,tab);
  printf("%.2f",wynik);
}
