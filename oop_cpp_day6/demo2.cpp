
#include<iostream>
using namespace std;
//person  => base / parent
class person
{
    protected:
        string name;
        int age;
    public:
    person()
    {
        name="Ravi";
        age=24;
    }
    void printPerson()
    {
        cout<<"\n  name="<<name<<" age="<<age;
    }
};
//emp is-a person
//emp=> derived / child

class emp:public person
{
    int empid;
    int sal;
    public:
    emp()
    {
        empid=204;
        sal=20000;
    }
    void printEmp()
    {
        printPerson();
        cout<<" empid="<<empid<<"  sal="<<sal;  
    }
    void updateName(string newName)
    {
        name=newName;
    }
};

int main()
{
    emp e1;
    e1.printEmp();
    //e1.name="Ravee111"; //error
    e1.updateName("Ravee");


    // person p1;
    // p1.printPerson();
    cout<<"\n";
    return 0;
}