#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int porownaj(char a[],char b[])
{
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
    }
    return 1;
}
int porownaj1(wchar_t a[],wchar_t b[])
{
    for(int i=0;i<wcslen(a);i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char napis[]="klocek";
    char napis1[]="klocek";
    int wynik=porownaj(napis,napis1);
    printf("%d\n",wynik);
    wchar_t napis2[]=L"super";
    wchar_t napis3[]=L"supr";
    int wynik1=porownaj1(napis2,napis3);
    printf("%d",wynik1);
}
