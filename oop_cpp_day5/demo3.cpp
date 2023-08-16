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
    //c3=c1.operator+(c2);
    //Operator Overloading Using member function   
    complex operator+(complex& c2)
    {
        complex c;
        c.real=this->real+c2.real;
        c.imag=this->imag+c2.imag;
        return c;
    }
    complex sum(complex& c2)
    {
        complex c;
        c.real=this->real+c2.real;
        c.imag=this->imag+c2.imag;
        return c;
    }
    friend complex operator-(complex& c1, complex& c2);
};//end of class

//Operator Overloading Using non member function
//global function
complex operator-(complex& c1, complex& c2)
{
    complex c4;
    c4.real=c1.real-c2.real;
    c4.imag=c1.imag-c2.imag;
    return c4;
}
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex c2(3,2);
    c2.printComplexNumber();

    complex c3,c4;
    //c1.real+c2.real; //error

    //c3=c1.sum(c2);
    c3=c1+c2;     //c3=c1.operator+(c2);
    c3.printComplexNumber();

    c4=c1-c2;     //c4=operator-(c1,c2);
    c4.printComplexNumber();


   
    
    return 0;
}