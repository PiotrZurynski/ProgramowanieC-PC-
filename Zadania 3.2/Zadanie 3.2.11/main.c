#include <stdio.h>
#include <stdlib.h>
int *zmienna(unsigned int n)
{
    return malloc(n*sizeof(int));
}
int main()
{
   printf("%d",zmienna(8));
}
