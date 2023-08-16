#include<iostream>
using namespace std;

int main()
{
    //allocate memory for 1 int by using malloc()
    int *ptr1=(int*)malloc(4);
    *ptr1=10;
    cout<<"\n *ptr1="<<*ptr1;
    free(ptr1);
    ptr1=NULL;

    //allocate memory for 1 int by using new
    int *ptr2=new int;
    *ptr2=20;
    cout<<"\n *ptr2="<<*ptr2;
    delete ptr2;
    ptr2=NULL;

    //allocate memory for 5 ints by using malloc()
    int *ptr3=(int*)malloc(20);
    for (int i = 0; i < 5; i++)
    {
        ptr3[i]=i+1;
        cout<<"\n ptr3["<<i<<"]="<<ptr3[i];
    }
    free(ptr3);
    ptr3=NULL;

    //allocate memory for 5 ints by using new   
    int *ptr4=new int[5];
    for (int i = 0; i < 5; i++)
    {
        ptr4[i]=i+2;
        cout<<"\n ptr4["<<i<<"]="<<ptr4[i];
    }
    delete[] ptr4;
    ptr4=NULL;
    
    cout<<"\n";
    return 0;
}