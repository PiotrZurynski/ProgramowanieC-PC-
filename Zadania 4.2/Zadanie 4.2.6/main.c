#include <stdio.h>
#include <stdlib.h>

void przepisz(int n,int tab1[],int tab2[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
        printf("%d",tab2[i]);
    }
}
void odwroc(int n,int tab1[],int tab2[])
{
    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[n-i-1];
        printf("%d",tab2[i]);
    }
}
int main()
{
    int n=5;
    int tab1[]={1,2,3,4,5};
    int tab2[n];
    przepisz(n,tab1,tab2);
    printf("\n");
    odwroc(n,tab1,tab2);

}
