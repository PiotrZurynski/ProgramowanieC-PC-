#include <stdio.h>
#include <stdlib.h>
int foo(int *a,int *b)
{
    return *a-*b;
}
int main()
{
    int tab[]={5,5,-4,0,2,-3,0,-2,3,9};
    int *wsk=tab-1;
    int b=*(wsk+=4);//b=0
    int c=b+3; //c=3 b=0//
    int d=foo(&b,&c);//d=-3 c=3 b=0
    int e=(wsk+=-1)[3];//e=-3
    e=(d-=2)+(c+=2);//e=0 d=-5 c=5
    c=d+(b+=4);//b=4 c=-1 d=-5
    b=*wsk +e;//b=-4
    b=(--c)-(d++);//b=3 c=-2 d=-4
}





