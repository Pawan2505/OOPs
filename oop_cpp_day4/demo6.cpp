#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n -------complex(int,int)------";
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<"\nComplex Number="<<this->real<<"+j"<<this->imag;
    } 
    ~complex()
    {
        cout<<"\n -------~complex()------";
    }
};
int main()
{
//Object get created on heap section hence this object is call Heap based  or dynamic object.
   complex *cptr=new complex(5,7);
   cptr->printComplexNumber();
   delete cptr;
   cptr=NULL;
}