#include<iostream>
#include<string.h>
using namespace std;
class A
{      
    int a,b;
    public:
      friend class B;
};
class B
{    
    A m;  
    public:
    void get()
    {
        cin>>m.a>>m.b;
    }
    void put()
    {
        cout<<m.a<<m.b<<endl;
    }     
};


int main()
{ 
  B n;
  n.get();
  n.put();  
}