#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"  "<<this->real<<"+j"<<this->imag;
    } 
};

template<class T>
void mySwap(T& refa,T& refb)
{
    T t=refa;
    refa=refb;
    refb=t;
}

int main()
{

    complex a(11,22), b(88,99);
    cout<<"\n---------before swap--------";
    cout<<"\n a=";
    a.printComplexNumber();
    cout<<"\n b=";
    b.printComplexNumber();
    mySwap(a,b);
    cout<<"\n---------after swap--------";
    cout<<"\n a=";
    a.printComplexNumber();
    cout<<"\n b=";
    b.printComplexNumber();


    // int a=44;
    // int b=88;
    // cout<<"\n before swap  a="<<a<<" b="<<b;
    // mySwap(a,b);
    // cout<<"\n after swap  a="<<a<<" b="<<b;


    // char a1='A';
    // char b1='B';
    // cout<<"\n before swap  a1="<<a1<<" b1="<<b1;
    // mySwap(a1,b1);
    // cout<<"\n after swap  a1="<<a1<<" b1="<<b1;




    cout<<"\n";
    return 0;
}