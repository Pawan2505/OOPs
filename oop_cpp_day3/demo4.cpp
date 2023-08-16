//class time  in cpp using cin and cout
#include<iostream>
using namespace std;
#include<stdio.h>
class time
{
    private: // Accessible only within the struct
        int hr;
        int min;
        int sec;
    public:   //Accessible within & outside struct
    //constructor overloading
        time()//Parameterless constructor
        {
            //printf("\n ----time()----");
            cout<<"\n ----time()----";
            hr=0;
            min=0;
            sec=0;
        }
        time(int h,int m,int s)//Parameterized constructor
        {
            //printf("\n ----time(int,int,int)----");
            cout<<"\n ----time(int,int,int)----";
            hr=h;
            min=m;
            sec=s;
        }
        void initTime()
        {
            hr=0;
            min=0;
            sec=0;
        }
        void setMin(int min)
        {
           this->min=min;
        }
       // void setHr(int hr)
       // void setSec(int sec)
       int getSec()
       {
           return this->sec;
       }
       //int getHr()
       //int getMin()
        void printTime()
        {
           // printf("\n time =%d:%d:%d",this->hr,this->min,this->sec);
            cout<<"\n time ="<<this->hr<<":"<<this->min<<":"<<this->sec;
        }
        void acceptTime()
        {
            //printf("\n enter time");
            cout<<"\n enter time";
            //scanf("%d%d%d",&this->hr, &this->min, &this->sec);
            cin>>this->hr>>this->min>>this->sec;
        }
        ~time()//Destructor : used to release the resources
        {
            //printf("\n ----  ~time()----");
            cout<<"\n ----  ~time()----";
        }
};//end of class
int main()
{
    //time --> class t1-> object of class time
    // time t1;
    // t1.printTime();

    // time t2;
    // t2.printTime();

    time p_t(8,30,45);   //8:30:45
    p_t.printTime();
    //p_t.min=15;
    p_t.setMin(15);
    p_t.printTime();

    //int s=p_t.sec;
    int s=p_t.getSec();
    //printf("\n value of s=%d",s);
    cout<<"\n value of s="<<s;

    // time s_t(9,0,0);   //9:0:0
    // s_t.printTime();
    return 0;
}