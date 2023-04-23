#include <stdio.h>
#include <stdlib.h>

void fajna(int n,int tab1[],int tab2[])
{
    int essa[n];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>0&&!unikalne(essa,count,tab1[i]))
        {
            essa[count]=tab1[i];
            count++;
        }
        if(tab2[i]>0&&!unikalne(essa,count,tab2[i]))
        {
            essa[count]=tab2[i];
            count++;
        }
    }

    for(int j=0;j<count;j++)
    {
        printf("%d\n",essa[j]);
    }

}
int unikalne(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return 1;
        }
    }
    return 0;
}
int main()
 {
    int n = 7;
    int tab1[] = {4, -5, 3, -7, 3, 4, -7};
    int tab2[]={-1,-1,-1,-2,-2,-5,-6};

    fajna(n, tab1, tab2);

    return 0;
}
