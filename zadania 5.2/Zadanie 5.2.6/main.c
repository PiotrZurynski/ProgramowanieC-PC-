#include <stdio.h>
#include <stdlib.h>
void kopiujn(int n,char nap1[],char nap2[])
{
    int i;
    for(i=0;i<n;i++)
    {
        nap2[i]=nap1[i];
    }
    nap2[i]='\0';
}
void kopiujn1(int n,wchar_t nap1[],wchar_t nap2[])
{
    int i;
    for(i=0;i<n;i++)
    {
        nap2[i]=nap1[i];
    }
    nap2[i]=L'\0';
}
int main()
{
    int n=7;
    char nap1[]="supermegacool";
    char nap2[20];
    kopiujn(n,nap1,nap2);
    printf("%s\n",nap2);
    wchar_t a[]=L"supermegacool";
    wchar_t b[20];
    kopiujn1(n,a,b);
    printf("%ls",b);


}
