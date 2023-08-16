
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
    // person p1;
    // person *pptr=NULL;
    // pptr=&p1;
    // pptr->printPerson();

    // emp e1;
    // emp *eptr=NULL;
    // eptr=&e1;
    // eptr->printPerson();
    // eptr->updateName("Ravee");
    // eptr->printEmp();

    emp e1;
    person *pptr=NULL;
    pptr=&e1; //base class pointer can hold object derived class


    cout<<"\n";
    return 0;
}