#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    //Static variable is a shared variable in all the objects    
    static int count;
    static int count;
    public:
    complex(int r=1,int i=1)
    {
        //cout<<"\n -------complex(int,int)------";
        this->real=r;
        this->imag=i;
        count++;
    }
    //static member function is class level method 
    static void printCount()
    {
        //this->   //error This pointer is not available in static member function  
        cout<<"\n value of count="<<count<<"  address of count="<<&count;
    }
    void printComplexNumber()
    {
        cout<<"\nComplex Number="<<this->real<<"+j"<<this->imag;
    } 
};//end of class
//globle declaration of static data member
int complex::count=0;
int main()
{
    complex::printCount(); //correct way to call static member fun
    
    complex c1;
    //cout<<"\n size of c1="<<sizeof(c1); =8
    complex::printCount();

    complex c2;
    c2.printCount();

    complex c3;
    c3.printCount();
    return 0;
}