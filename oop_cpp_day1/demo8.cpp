//struct in cpp
#include<stdio.h>

struct time
{
    private: // Accessible only within the struct
        int hr;
        int min;
        int sec;
    public:   //Accessible within & outside struct
        void printTime()
        {
            printf("\n time =%d:%d:%d",hr,min,sec);
        }
        void acceptTime()
        {
            printf("\n enter time");
            scanf("%d%d%d",&hr, &min, &sec);
        }
};//end of struct
int main()
{
    int n1;
    struct time t1;
    printf("\n size of t1=%d",sizeof(t1));  //-->12
    // t1.hr=6;
    // t1.min=20;
    // t1.sec=34;
    // t1.printTime();
    t1.acceptTime();
    //t1.hr=23; error
    t1.printTime();
    return 0;
}