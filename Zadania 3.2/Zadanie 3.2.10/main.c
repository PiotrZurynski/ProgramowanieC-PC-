#include <stdio.h>
#include <stdlib.h>
double*zmienna()
{
    return malloc(sizeof(double));
}
int main()
{
   printf("%d",zmienna);
   return 0;
}
