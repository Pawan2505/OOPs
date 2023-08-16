//class in cpp
#include<stdio.h>
class time
{
    private: // Accessible only within the struct
        int hr;
        int min;
        int sec;
    public:   //Accessible within & outside struct
        void printTime()
        {
            printf("\n time =%d:%d:%d",this->hr,this->min,this->sec);
        }
    //If we call member function on object then compiler 
    //implicitly pass address of that object as a 
    //argument to the function implicitly call as this pointer.
        void acceptTime()
        {
            printf("\n enter time");
            scanf("%d%d%d",&this->hr, &this->min, &this->sec);
        }
};//end of class
int main()
{
    //time --> class t1-> object of class time
    time t1;
    printf("\n size of t1=%d",sizeof(t1));  //-->12
    t1.acceptTime();
    t1.printTime();

    time t2;
    t2.acceptTime();
    t2.printTime();


    time t3;
    t3.acceptTime();
    t3.printTime();




    return 0;
}