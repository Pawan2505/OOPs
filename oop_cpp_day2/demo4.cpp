//class in cpp
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
            printf("\n ----time()----");
            hr=0;
            min=0;
            sec=0;
        }
        time(int h,int m,int s)//Parameterized constructor
        {
            printf("\n ----time(int,int,int)----");
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
        void printTime()
        {
            printf("\n time =%d:%d:%d",this->hr,this->min,this->sec);
        }
        void acceptTime()
        {
            printf("\n enter time");
            scanf("%d%d%d",&this->hr, &this->min, &this->sec);
        }
        ~time()//Destructor : used to release the resources
        {
            printf("\n ----  ~time()----");
        }
};//end of class
int main()
{
    //time --> class t1-> object of class time
    time t1;
    t1.printTime();

    time t2;
    t2.printTime();

    time p_t(8,30,45);   //8:30:45
    p_t.printTime();
    time s_t(9,0,0);   //9:0:0
    s_t.printTime();



    return 0;
}