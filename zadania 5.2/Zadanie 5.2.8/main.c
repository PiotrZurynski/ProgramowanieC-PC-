#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int funkcja(char a[])
{
    int j=0;
    char ch;
    while(a[j])
    {
        ch=a[j];
        putchar(toupper(ch));
        j++;
    }
    return ch;
}
int main()
{
    char a[]="superduzytennapis";
    int wynik=funkcja(a);
    printf("%s",wynik);
}
