#include <stdio.h>
#include <stdlib.h>
void zmienna(const int*n,int*w)
{
    *w=*n;
}
int main()
{

    int x=3,y=6,z=8;
    zmienna(&x,&y);
    printf("%i\n",y);
    zmienna(&z,&y);
    printf("%i\n",y);
    return 0;
}
