#include <stdio.h>
#include <stdlib.h>
void zamiana(int*a,int*b)
{
    int zmienna;
    zmienna=*a;
    *a=*b;
    *b=zmienna;

}
int main()
{
    int x=1;
    int n=4;
    zamiana(&x,&n);
    printf("%d\n",x);
    printf("%d\n",n);

}
