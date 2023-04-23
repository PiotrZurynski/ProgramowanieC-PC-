#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dlugosc(char a[])
{
    int count=0;
    for(int i=0;i<strlen(a);i++)
    {
        count++;
    }
    return count;
}
int dlugosc2(wchar_t a[])
{
    int count=0;
    for(int i=0;i<wcslen(a);i++)
    {
        count++;
    }
    return count;

}
int main()
{
    char napis[]="superancko";
    wchar_t napis2[]=L"superancko";
    int wynik=dlugosc(napis);
    printf("%d\n",wynik);
    int wynik2=dlugosc2(napis2);
    printf("%d",wynik);
}
