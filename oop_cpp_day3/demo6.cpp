#include<iostream>
using namespace std;

int main()
{

    int n;
    n=10;
    //const int c; //error Initializing constant variable is mandatory
    const int c=11;
    cout<<"\n value of const c="<<c;
    //c++;  //error
    //c=200;   //error
    cout<<"\n";
    return 0;
}