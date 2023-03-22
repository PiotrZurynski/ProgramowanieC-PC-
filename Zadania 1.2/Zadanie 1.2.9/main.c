#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   double a;
   double b;
   scanf("%lf",&a);
   if(a<0)
   {
       printf("Podales liczbe ujemna ktorej nie da sie spierwiastkowac");
   }
   else
   {
       printf("%f",sqrt(a));
   }
}
