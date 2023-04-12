#include <stdio.h>
#include <stdlib.h>

void zamienWartosci(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 1, b = 2;

    printf("Przed zamian¹: a = %d, b = %d\n", a, b);
    zamienWartosci(a, b);
    printf("Po zamianie: a = %d, b = %d\n", a, b);

    return 0;
}
