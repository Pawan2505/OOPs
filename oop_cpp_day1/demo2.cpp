#include<stdio.h>

//void printMessage();  ////function prototype 

//Inline functions get replaced by compiler at its call statement. 
//It ensures faster execution of function.

//Function Definition
inline void printMessage()
{
    //function body
    printf("\n hello all OM45 ..");
    printf("\t good Afternoon.. :)");
}
int main()
{
    //---
    //---
    //---
    printMessage();//Function Call
    //--
    //--
    printMessage();
    printMessage();
    printMessage();
    printMessage();
    return 0;
}
