#include<stdio.h>
//namespace is designed to avoid name ambiguity and grouping related types.

int g=11;
namespace ns1
{
    int connector=3305;
    namespace nns
    {
        int nnsData=100;
    }
}
namespace ns2
{
    int connector=2207;
    int num1=11;
    int num2=12;
    int num3=13;
    int num4=14;
    int num16=55;
}
int main()
{
    printf("\n value of g=%d",  ::g);
    printf("\n value of NS1::connector=%d", ns1::connector);
    printf("\n value of ns2::connector=%d", ns2::connector);
    printf("\n ns1::nns::nnsData= %d",ns1::nns::nnsData);
    using namespace ns2;
     printf("\n value of num2=%d",num2);
     printf("\n value of num16=%d",num16);



    return 0;
}