#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void przepisz(char napis[],char napis2[])
{
    for(int i=0;i<strlen(napis);i++)
    {
        napis2[i]=napis[i];
    }
}
void przepisz2(wchar_t napis[],wchar_t napis2[])
{
    for(int i=0;i<wcslen(napis);i++)
    {
        napis2[i]=napis[i];
    }
}
int main()
{
    char napis[]="supermegacool";
    char napis2[20];
    przepisz(napis,napis2);
    printf("%s",napis2);
    wchar_t napis3[]=L"supermegacool";
    wchar_t napis4[20];
    przepisz2(napis3,napis4);
    printf("%ls",napis4);

}
