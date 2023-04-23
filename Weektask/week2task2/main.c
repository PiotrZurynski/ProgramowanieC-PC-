#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n;
    scanf("%d",&n);
    int i=1;
    while(i*i*i<=n)
    {
        i++;
    }
    printf("%d\n", i-1);

}
