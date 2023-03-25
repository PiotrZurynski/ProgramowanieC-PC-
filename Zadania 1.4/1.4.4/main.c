#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj liczbe n\n");
    scanf("%d",&n);
    if(n>=0)
    {
        int suma=1;
      for(int i=n;i>0;i--)
      {
        suma*=i;
      }
      printf("%d",suma);
    }
}
