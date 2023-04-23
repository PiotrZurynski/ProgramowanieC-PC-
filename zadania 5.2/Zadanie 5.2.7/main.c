#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void sklej(char a[], char b[], char c[])
{
    int i = 0, j = 0;
    while (a[i] != '\0')
        {
        c[j] = a[i];
        i++;
        j++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        c[j] = b[i];
        i++;
        j++;
    }
    c[j] = '\0';
}

int main()
{
    char napis1[] = "Ala m";
    char napis2[] = "a kota";
    char wynik[20];

    sklej(napis1, napis2, wynik);

    printf("Wynik: %s\n", wynik);

    return 0;
}
