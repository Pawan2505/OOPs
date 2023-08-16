#include<iostream>
using namespace std;


class constDemo
{
    int n;
    const int c;
    mutable int m;
    public:
    constDemo():c(20),n(10) //constructors member initializer list.
    {
        n=10;
        //c=20;
        m=30;
    }
    void printData() const
    {
        //n++;
        //c++;

        //In constant member function, if we want to modify state of non constant 
        //data member then we should use mutable keyword.
        m++;

        cout<<"\n n="<<n;
        cout<<"\n c="<<c;
        cout<<"\n m="<<m;
    }
};
int main()
{
    constDemo d1;
    d1.printData();
    cout<<"\n";
    return 0;
}