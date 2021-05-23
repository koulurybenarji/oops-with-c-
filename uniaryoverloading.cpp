#include<string.h>
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        cin>>a;
    }
    void operator ++()
    {
        a++;
        put();
    }
    void operator --()
    {
       a--;
       put();
    }
    void put()
    {
        cout<<a;
    }

};
int main()
{
     A m;
     ++m;
     --m;

}