#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  if(a>b)
  {
      printf("Wieksza jest liczba a:%d",a);
  }
  if(a<b)
  {
      printf("Wieksza jest liczba b:%d",b);
  }
  if(a==b)
  {
      printf("Podane liczby sa rowne:%d",a);
  }
}
