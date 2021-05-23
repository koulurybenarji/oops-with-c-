#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    A()
    {
       cout<<"A";
    }
};
class B: private A
{
   protected:
   int b;
   public:
   B()
   {
      cout<<"B";
   }
   void print()
      {
        a=50;
        cout<<a;  
      }

};
class c:private B
{
   public:
   c()
   {
      b=10; 
      print(); 
   }
   

};
int main()
{ 
   c m;

}