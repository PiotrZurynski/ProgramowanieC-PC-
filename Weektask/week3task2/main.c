#include <stdlib.h>
#include <stdio.h>

int dodaj_nieparzyste(int n) {
    if (n == 11) {
        return 11;
    } else if (n % 2 == 0) {
        return dodaj_nieparzyste(n-1);
    } else {
        return n + dodaj_nieparzyste(n-2);
    }
}

int main() {
    int suma = dodaj_nieparzyste(67);
    printf("Suma nieparzystych liczb od 11 do 67 wynosi: %d\n", suma);
    return 0;
}
