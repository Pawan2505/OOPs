#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void calArea()=0;
    virtual void input()=0; 
};
class square: public shape
{  
    int s;
    public:
    virtual void calArea()=0;
    virtual void input()=0; 
};
class rect:public shape
{
    int l,b;
    public:
    void calArea()
    {
        int a=l*b;
        cout<<"\n area of rect="<<a;
    }
    void input()
    {
        cout<<"\n enter l and b for rect";
        cin>>l>>b;
    }
};

class circle:public shape
{
    int r;
    public:
    void calArea()
    {
        int a=3.14*r*r;
        cout<<"\n area of circle="<<a;
    }
    void input()
    {
        cout<<"\n enter radius";
        cin>>r;   
    }
};
int main()
{
    //shape sp;//
    //square s1;

    shape *sptr=NULL;
    rect r1;
    circle c1;
    int ch;
    do
    {
        cout<<"\n enter choice 1:rect  2:circle 0:exit";
        cin>>ch;
        switch (ch)
        {
        case 1: //rect
            sptr=&r1;
            break;
        case 2://circle
            sptr=&c1;
            break;
        }
        if(sptr!=NULL)
        {
            sptr->input();
            sptr->calArea();
        }
       sptr=NULL;
    } while (ch!=0);
    



    // circle c1;
    // c1.input();
    // c1.calArea();

    // rect r1;
    // r1.input();
    // r1.calArea();

    // shape sh;
    // sh.input();
    // sh.calArea();
    cout<<"\n";
    return 0;
}