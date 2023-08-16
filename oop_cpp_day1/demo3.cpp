#include<stdio.h>

//Default Arguments
void add(int a=0,int b=0,int c=0,int d=0)
{
    int r;
    r=a+b+c+d;
    printf("\n a=%d  b=%d  c=%d  d=%d =>%d",a,b,c,d,r);
}

int main()
{
    add(1,2,3,4);
    add(1,2,3);
    add(1,2);
    add(1);
    add();
    return 0;
}