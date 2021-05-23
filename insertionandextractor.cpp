#include<iostream>
using namespace std;
class A
{
    int a;
    public:
      friend void operator >>(istream &in,A &m);
      friend void operator <<(ostream &out,A  &m )
      {
          out<<m.a;
      }
    
};
void operator >>(istream &in,A  &m )
{
          in>>m.a;
}
int main()
{
    A m;
    cin>>m;
    cout<<m;
    
}