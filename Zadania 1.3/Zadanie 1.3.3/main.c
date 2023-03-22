#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Najwieksza liczba to: %d\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Najwieksza liczba to: %d\n", b);
    }
    else
    {
        printf("Najwieksza liczba to: %d\n", c);
    }

    return 0;
}
