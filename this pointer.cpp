#include<iostream>
#include<iomanip>
using namespace std;
class A
{
    private:
    int a;
    public:
      void set()
      {
          a=20;
      }
      void print(int a)
      {
        this->a=a;
        cout<<a;
      }
};
int main()
{
  A a;
  a.set();
  a.print(100);


  
}