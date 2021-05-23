#include<iostream>
#include<string.h>
using namespace std;
class A
{
    private:
     int a;
    public:
      A()
      {
          a=10;
          cout<<a;
      }
      void print()
      {
          cout<<a*a;
      }
};
int main()
{
    A a;
    A &b=a;
    b.print();
    
}