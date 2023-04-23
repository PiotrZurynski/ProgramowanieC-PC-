#include <stdio.h>
#include <stdlib.h>
void a(int arr[],int n,int k)
{
    int i,j;
    int temp[k];
    for(i=0;i<k;i++)
    {
        temp[i]=arr[i];
    }
    for(i=k;i<n;i++)
    {
        arr[i-k]=arr[i];
    }
    for(int i=0,j=n-k;i<k;i++,j++)
    {
        arr[j]=temp[i];
    }

}
int main()
{
  int tab[]={2,-3,4,-1,6,7,11};
  int n=7;
  int k=3;
  a(tab,n,k);
   for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
}
