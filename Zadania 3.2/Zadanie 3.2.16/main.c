#include <stdio.h>
#include <stdlib.h>
void zmiana(const int*w,const int* const y)
{
    int *y_1=(int*)y;
    *y_1=*w;
}
int main()
{
   int x=44;
   int z=5;
   zmiana(&x,&z);
   printf("%d",z);
}
