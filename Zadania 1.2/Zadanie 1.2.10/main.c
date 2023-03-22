#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    scanf("%lf",&x);
    if(x>0)
    {
        printf("%lf",x);
    }
    else
    {
       printf("%lf",-x);
    }
}
