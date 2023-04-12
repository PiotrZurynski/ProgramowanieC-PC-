#include <stdio.h>
#include <stdlib.h>
void zamiana_z_warunkiem(int*a,int*b)
{
    if(*b<*a)
    {
        int zmienna=*a;
        *a=*b;
        *b=zmienna;
    }

}
int main()
{
    int x=2;
    int y=5;
    zamiana_z_warunkiem(&x,&y);
    printf("%d\n",x);
    printf("%d",y);
}
