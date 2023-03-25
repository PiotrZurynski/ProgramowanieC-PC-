#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Podaj liczby a,b,c,d\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int i =1;
    while(((abs(a)*(i*i))+(b*i)+(c-d))<=0)
    {
        i++;
    }
    printf("%d\n",i);

    int j=1;
    while(((5*(j*j))+(a*j)+(b-c))>=0)
    {
        j++;
    }
    printf("%d\n",j);
    int k=1;
    while(((5*(k*k))+(a*k)+(b-c))>0)
          {
              k++;
          }
          printf("%d",k);
}
