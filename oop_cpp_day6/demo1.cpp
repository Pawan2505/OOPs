
#include<iostream>
using namespace std;
//base class
//parent class
class base
{
    public:
    int b;
    void funBase()
    {
        cout<<"\n ---base::funBase()--";
    }
};
//derived class
//child class
class derived:public base
{
    public:
    int d;
    void funDerived()
    {
        cout<<"\n ---derived::funDerived()---";
    }
};

int main()
{

    derived d1;
    cout<<"\n size of d1="<<sizeof(d1); //==>8
    d1.funDerived();
    d1.funBase();

    // base b1;
    // cout<<"\n size of b1="<<sizeof(b1);
    // b1.funBase();

    cout<<"\n";
    return 0;
}