#include <stdio.h>
#include <stdlib.h>

void przypis(int n,int tab1[],int tab2[],int tab3[])
{
    int suma=0;
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
        printf("%d",tab3[i]);
    }
}
void wiekszy(int n,int tab1[],int tab2[],int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if(tab1[i]<tab2[i])
        {
            tab3[i]=tab2[i];
        }
        if (tab1[i]>tab2[i])
        {
            tab3[i]=tab1[i];
        }
        printf("%d",tab3[i]);
    }
}
void przepisz(int n,int tab1[],int tab2[],int tab3[])
{
    int zmienna,trucht,tez;
    for(int i=0;i<n;i++)
    {
     zmienna=tab1[i];
     trucht=tab2[i];
     tez=tab3[i];
     tab1[i]=tez;
     tab2[i]=zmienna;
     tab3[i]=trucht;
    }


}
int main()
{
    int n=5;
    int tab1[]={5,4,3,2,1};
    int tab2[]={2,3,4,5,6};
    int tab3[n];
    przypis(n,tab1,tab2,tab3);
    printf("\n");
    wiekszy(n,tab1,tab2,tab3);
    printf("\n");
    przepisz(n,tab1,tab2,tab3);
    for(int i=0;i<n;i++)
    {
        printf("%d",tab1[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",tab2[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",tab3[i]);
    }
    printf("\n");





}
