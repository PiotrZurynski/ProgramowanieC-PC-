#include <stdio.h>
#include <stdlib.h>

int zmiana(int n, int tab[])
{
    int count = 0;
    int last_znak = 0;
    for (int i = 0; i < n; i++)
    {
            int znak;
            if (tab[i] > 0)
            {
                znak = 1;
            }
            else if (tab[i] < 0)
            {
            znak = -1;
            }

            if (i > 0 &&znak != last_znak)
            {
            count++;
            }
        last_znak = znak;
    }
    return count;
}

int main() {
    int tab[] = {-1, -3, -4, 2,-1};
    int n = sizeof(tab) / sizeof(tab[0]);
    int wynik = zmiana(n, tab);
    printf("Zmiana znaku nast¹pi³a %d razy.\n", wynik);
    return 0;
}
