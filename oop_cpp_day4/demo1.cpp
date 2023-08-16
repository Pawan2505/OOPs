#include<iostream>
using namespace std;

int main()
{
    int n1;
    n1=10;

    //Reference is alias or another name given to the existing memory location
    int& ref=n1;
    ref=15;

    cout<<"\n value of n1="<<n1<<"\n address of n1="<<&n1;
    cout<<"\n value of ref="<<ref<<"\n address of ref="<<&ref;

    cout<<"\n";
    return 0;
}