#include <stdio.h>
#include <stdlib.h>
double *zmienna(unsigned int n)
{
    return malloc(n*sizeof(double));
}
int main()
{
   printf("%d",zmienna(7));
}
