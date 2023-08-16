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
        // Mutators / setter : modify state of object
        void setMin(int min)
        {
           this->min=min;
        }
        void setSec(int sec)
        {
            this->sec=sec;
        }
        void setHr(int hr)
        {
            this->hr=hr;
        }
       //inspector/getter : read the data member
       int getSec()
       {
           return this->sec;
       }
        int getMin()
        {
            return this->min;
        }
        int getHr()
        {
            return this->hr;
        }
        void printTime()//Facilitator : Provide extra facility to work with object
        {
            printf("\n time =%d:%d:%d",this->hr,this->min,this->sec);
        }
        void acceptTime()//Facilitator : Provide extra facility to work with object
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
    
    time p_t(8,30,45);   //8:30:45
    p_t.printTime();
    //p_t.min=15;
    p_t.setMin(15);
    p_t.printTime();

    //int s=p_t.sec;
    int s=p_t.getSec();
    printf("\n value of s=%d",s);

    
    return 0;
}