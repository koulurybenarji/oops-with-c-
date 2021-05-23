#include<iostream>
#include<iomanip>
using namespace std;
class circle
{
    private:
    int a;
    public:
      circle()
      {
          a=10;
      
      }
      circle(int l)
      {
         a=l;
      }
      void radius()
      {
          cout<<a*a;
      }
};

int main()
{
  circle A;
  circle B(100);
  A.radius();
  B.radius();

  
}