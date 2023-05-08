#include <stdio.h>
#include <stdlib.h>
int *wskaznik(int n, int tab1[])
{
    int count=0;
   for(int i=0;i<n;i++)
   {
       if(tab1[i]!=0)
       {
           count++;
       }
   }
   int *tab2=(int*)malloc(count*sizeof(int));
   int j=0;
   for(int i=0;i<n;i++)
   {
       if(tab1[i]!=0)
       {
          tab2[j]=tab1[i];
          j++;
       }

   }
   return tab2;
}
int main()
{
   int n=5;
   int tab1[]={1,0,2,0,3};
   int *tab2=wskaznik(n,tab1);
   printf("%d\n",tab2);
   for(int i=0;i<sizeof(tab2)-n;i++)
   {
       printf("%d",tab2[i]);

   }
   free(tab2);


}
