#include<iostream>
using namespace std;
//program to test the mode of inheritance 
class BASE
{
	private:
		int PrivateData;
	protected:
		int ProtectedData;
	public:
		int PublicData;
};

class Derived:private BASE
{
	void printDate()
	{
		this->PrivateData=1;
		this->ProtectedData=1;
		this->PublicData=1;
	}

};
class DerivedDerived:public Derived
{
public :
	void DerivedDerivedPrint()
	{
		this->PrivateData=1;
		this->ProtectedData=1;
		this->PublicData=1;
	}
};
class other
{
	void OtherPrint()
	{
		Derived d;
		d.PrivateData=1;
		d.ProtectedData=1;
		d.PublicData=1;
	}
}
int main()
{
}
