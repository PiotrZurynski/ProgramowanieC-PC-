#include <stdio.h>
#include <stdlib.h>

double *kopia(unsigned int n,double tab[])
{
    double *kopia=(double*)malloc(n*sizeof(double));
    for(int i=0;i<n;i++)
    {
        kopia[i]=tab[i];
    }
    return kopia;
}

int main()
{
    unsigned int n=5;
    double tab[]={1.2,1.3,1.4,1.5};
    double *copy=kopia(n,tab);
    for(int i=0;i<n;i++)
    {
        printf("%.2f,",copy[i]);
    }
    free(copy);
}
