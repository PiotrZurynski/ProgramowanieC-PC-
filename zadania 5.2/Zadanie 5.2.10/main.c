#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char* sklej(char* napis1, char* napis2, char* napis3) {
    static char wynik[1000]; // deklarujemy statyczn¹ tablicê na wynik
    strcpy(wynik, napis1); // kopiujemy pierwszy napis
    strcat(wynik, napis2); // doklejamy drugi napis
    strcat(wynik, napis3); // doklejamy trzeci napis
    return wynik; // zwracamy wynik
}

int main() {
    char napis1[] = "Hello, ";
    char napis2[] = "world!";
    char napis3[] = " How are you?";
    char wynik = sklej(napis1, napis2, napis3);
    printf("%s\n", wynik);
    return 0;
}
