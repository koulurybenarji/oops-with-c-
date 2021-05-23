#include<iostream>
using namespace std;
class A
{ 
    protected:
     int a,b;
    public:
     virtual void print()=0;
};
class B:public A 
{
    public:
    void print()
    {
        cin>>a;
        cout<<a;
    }

};
class C:public A
{
    public:
  void print()
  {
      cin>>b;
     cout<<b;
  }

};
int main()
{
    B m;
    m.print();
    C n;
    n.print();
}