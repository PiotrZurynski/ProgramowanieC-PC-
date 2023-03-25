#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Podaj liczbe n");
   scanf("%d",&n);
    if(n>0)
    {
        int suma=0;
        for(int i=0;i<=n;i++)
        {
            if(i%2==1)
            {
                suma+=(i*i);
            }
        }
        printf("%d",suma+(n*n));
    }
    else
    {
        /*nic*/
    }
}
