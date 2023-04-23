#include <stdio.h>
#include <stdlib.h>
double task(double *a)
{
    return ((*a)*(*a));
}
int main()
{
    double n=2.5;
    double wynik=task(&n);
    printf("%.2f",wynik);

}
