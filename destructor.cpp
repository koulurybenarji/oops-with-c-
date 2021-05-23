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
      } 
      ~A()
      {
         cout<<"released memory"<<endl;
         cout<<a<<endl;
      }

};
int main()
{
    A a;
}