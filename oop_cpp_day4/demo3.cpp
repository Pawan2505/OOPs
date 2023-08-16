#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n ----complex(int,int)----";
        this->real=r;
        this->imag=i;
    }
    complex(const complex& refc1 )  //Copy Constructor
    {
        cout<<"\n ----complex(complex)----";
        this->real=refc1.real;
        this->imag=refc1.imag;
    }
    void printComplexNumber()
    {
        cout<<"\nComplex Number="<<this->real<<"+j"<<this->imag;
    } 
};
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();


    complex cc(c1); //complex cc=c1; //Copy Constructor  called
    cc.printComplexNumber();
    
    return 0;
}