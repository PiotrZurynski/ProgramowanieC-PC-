#include <stdio.h>
#include <stdlib.h>
double sum(int n, double x) {
    double sum = 0.0;
    double term = 1.0;
    int i, j;
    for (i = 1; i <= n; i++) {
        term = 1.0;
        for (j = 1; j <= i; j++) {
            term *= x;
        }
        sum += term + i;
    }
    return sum;
}
int main()
{
    int a=5;
    double b=2.5;
    double result = sum(a, b);
    printf("Suma szeregu wynosi: %f", result);
    return 0;

}
