
#include<iostream>
using namespace std;

class MyData
{
private:
	int pin;
	int pass;
public:
	MyData()
    {
        pin=1998;
        pass=2006;
    }
	void PrintMyAccDetails()
    {
        cout<<"\npin="<<pin<<"   pass="<<pass;
    }
    friend void anyFunction(); //globle function is decleared as friend function
};//end of class
void anyFunction()
{
	MyData d1;
	d1.pass=9898;
	d1.pin=9999;
	d1.PrintMyAccDetails();
}
int main()
{
    anyFunction();
    cout<<"\n";
    return 0;
}