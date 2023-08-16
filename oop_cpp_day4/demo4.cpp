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
        cout<<"\nComplex Number="<<this->real<<"+j"<<this->imag;
    } 
    complex sum(complex& c2)
    {
        complex c;
        c.real=this->real+c2.real;
        c.imag=this->imag+c2.imag;
        return c;
    }
};
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex c2(3,2);
    c2.printComplexNumber();
    complex c3;
    //c1.real+c2.real; //error

    c3=c1.sum(c2);
    c3.printComplexNumber();
   
    return 0;
}