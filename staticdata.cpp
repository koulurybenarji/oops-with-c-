#include<iostream>
using namespace std;
class A
{
     public:
    static int a,b;
    static void put()
    {
        cout<<a<<b;
    }
    

};
int A :: a=10;
int A :: b=20;

int main()
{
  A m;
  m.put();

}