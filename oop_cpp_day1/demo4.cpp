#include<stdio.h>
//function overloading.
void printValue(int n1)
{
    printf("\n value of int n1=%d",n1);
}
////Return type is not considered for function overloading.
// int printValue(int n1) // //error
// {
//     printf("\n value of int n1=%d",n1);
// }
void printValue(int n1,int n2)
{
    printf("\n value of int n1=%d  int n2=%d",n1,n2);
}
void printValue(char ch)
{
    printf("\n value of char ch=%c",ch);
}
void printValue(int n1,char ch)
{
    printf("\n value of int n1=%d  char ch=%c",n1,ch);
}
void printValue(char ch,int n1)
{
    printf("\n value of   char ch=%c int n1=%d",ch,n1);
}
int main()
{
   printValue(10);
   printValue('A');
   printValue(2,3);
   printValue(2,'W');
   printValue('M',7);
    return 0;
}