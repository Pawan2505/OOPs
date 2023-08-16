#include<stdio.h>
//wchar_t :- it can store 16 bit character. 
//It takes 2 bytes in memory.


int main()
{
    wchar_t wch=L'A';
    printf("\n wchar_t wch=%c   size of wch=%d",wch,sizeof(wch));
    return 0;
}