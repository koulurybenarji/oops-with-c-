#include<iostream>
using namespace std;
class A
{
  public:
   A()
   {
       cout<<" constructor"<<endl;
   }
   ~A()
   {
       cout<<"destructor"<<endl;
   }
};
int main()
{
    try{
        A a;
        throw 10;
        cout<<"deleting destructor"<<endl;
    }
    catch(int m)
    {
        cout<<m<<endl;
    }
    cout<<"thank u";
}