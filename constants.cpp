#include<iostream>
#include<string.h>
using namespace std;
class A
{      
    int a,b;
    const int c=10;
    public:
    void read()
    {
        a=10;
        b=50;
    }
    void change() const
    {
        cout<<a<<b<<c;//u cannot change the values of a and b 
    }
};

int main()
{ 
   A m;
   m.read();
   m.change();
}