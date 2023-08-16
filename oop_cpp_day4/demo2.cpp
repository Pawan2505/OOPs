#include<iostream>
using namespace std;

//variable is passed by reference in function
void mySwap(int& refa,int& refb)
{
    int t=refa;
    refa=refb;
    refb=t;
}

int main()
{
    int a=44;
    int b=88;
    cout<<"\n before swap  a="<<a<<" b="<<b;
    mySwap(a,b);
    cout<<"\n after swap  a="<<a<<" b="<<b;
    cout<<"\n";
    return 0;
}