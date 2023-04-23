#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void wytnij(char a[], int n, int m) {
    int len = strlen(a);
    int i, j;
    if (n >= 0 && n <= len && m >= n && m < len) {
        for (i = n, j = m + 1; j <= len; ++i, ++j) {
            a[i] = a[j];
        }
        a[i] = '\0';
    }
}
int main()
{
    char a[]="napisiks";
    int b=2;
    int c=4;
    wytnij(a,b,c);
    printf("%s",a);
}
