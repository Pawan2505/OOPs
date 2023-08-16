#include<iostream>
using namespace std;

class engine
{
    int cc;
    int fuel;
    public:
    void printEngine()
    {
        cout<<"\n engine cc="<<cc<<" fuel="<<fuel;
    }
    void acceptEngine()
    {
        cout<<"\n enter engine cc and fuel";
        cin>>cc>>fuel;
    }
};
class car
{
    int price;
    engine e; //object of engine class is data member of car class
    public:
    void printCar()
    {
        cout<<"\n price="<<price;
        e.printEngine();
    }
    void acceptCar()
    {
        cout<<"\n enter price";
        cin>>price;
        e.acceptEngine();
    }
};

int main()
{
    car c1;
    c1.acceptCar();
    c1.printCar();


    // engine e1;
    // e1.acceptEngine();
    // e1.printEngine();

    cout<<"\n";
    return 0;
}