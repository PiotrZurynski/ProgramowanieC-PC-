#include <stdio.h>
#include <stdlib.h>
void zwolnij(double *tab)
{
    free(tab);
}
int main()
{
   double*myto=(malloc(10*sizeof(double)));
   zwolnij(myto);
}
