#include<iostream>
using namespace std;
template  <class t>
class A
{
    t a,b;
    public:
      void get()
      {
          cin>>a>>b;
      }
      t sum();
};
template  <class t>
t A<t>::sum()
{
    return a+b;
}
int main()
{
    A <int> m;
    A <float> n;
    m.get();
    n.get();
    cout<<m.sum()<<endl;
    cout<<n.sum()<<endl;;
}