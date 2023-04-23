#include <stdio.h>
#include <stdlib.h>
void przepisz(int n,int tab1[],int tab2[],int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i] = tab1[i];
        tab3[i + n] = tab2[i];
    }
}
void przestan(int n,int tab1[],int tab2[],int tab3[])
{
    for (int i = 0; i < n; i++)
        {
        tab3[2 * i+1] = tab1[i];
        tab3[2 * i ] = tab2[i];
    }
}
int main()
{
    int n=5;
    int tab1[]={1,2,3,4,5};
    int tab2[]={2,3,4,5,6,};
    int tab3[2*n];
    przepisz(n,tab1,tab2,tab3);
    for(int i=0;i<2*n;i++)
    {
        printf("%d",tab3[i]);
    }
    printf("\n");
    przestan(n,tab1,tab2,tab3);
    for(int i=0;i<2*n;i++)
    {
        printf("%d",tab3[i]);
    }


}
