#include<iostream>
#include<string.h>
using namespace std;
class A
{     
    int a,b;
    public:
    A()
    {
        cin>>a>>b;
    }
    friend void put(A);
};

void put(A m)
{
    cout<<m.a<<m.b;
}
int main()
{ 
    A m;
    put(m);
 
}