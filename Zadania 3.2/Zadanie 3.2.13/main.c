#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double jedna(int n)
{
    return sqrt(n*n*n);
}
double wywolaj(double (*fun)(int arg),int a)
{
    return jedna(a);
}
int main()
{
    int a=3;
    printf("%lf\n",wywolaj(&jedna,a));
}
