#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    // complex()
    // {
    //     cout<<"\n ----complex()----";
    //     this->real=1;
    //     this->imag=1;
    // }
    complex(int r=1,int i=1)
    {
        cout<<"\n ----complex(int,int)----";
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\nComplex Number="<<this->real<<"+j"<<this->imag;
    }
    ~complex()
    {
        cout<<"\n ---- ~complex()----";
    }
};
int main()
{
    complex c1;
    c1.printComplexNumber();

    complex c2(5,7);
    c2.printComplexNumber();
    return 0;
}