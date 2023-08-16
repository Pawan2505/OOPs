#include<iostream>
using namespace std;

int main()
{
    int n,d;
    try
    {
        cout<<"\n enter n and d";
        cin>>n>>d;
        if(d==0)
            throw "error";
        int res=n/d;
        cout<<"\n result="<<res;
    }
    catch( int e)
    {
        cout<<"\n divid by zero error  --(int)--";
    }
    catch(char ch)
    {
        cout<<"\n divid by zero error  --(char)--";
    }
    catch(...)
    {
        cout<<"\n divid by zero error  --(...)--";
    }
    
    
    
    cout<<"\n";
    return 0;
}