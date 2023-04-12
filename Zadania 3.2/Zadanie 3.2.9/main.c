#include <stdio.h>
#include <stdlib.h>
int *zmienna()
{
    return malloc(sizeof(int));
}
int main()
{
   printf("%d",zmienna());
    return 0;
}
