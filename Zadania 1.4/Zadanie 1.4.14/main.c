#include <stdio.h>
#include <stdlib.h>

void suma(int n)
{
    int suma=1;
    int a,b,c;
    for(int a=1;a<n;a++)
    {
        for(b=a;b<n;b++)
        {
            for(c=b;c<n;c++)
            {
                if((a*a)+(b*b)==(c*c))
                {
                    printf("%d%d%d",a,b,c);
                }
            }
        }
    }
}
int main()
{
    int n;
    printf("Podaj liczbe n");
    scanf("%d",&n);
    suma(n);

}
