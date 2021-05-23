#include<string.h>
#include<iostream>
using namespace std;
class A
{
  int real;
  int img;
  public:
  void get()
  {
      cout<<"enter value";
      cin>>real;
      cin>>img;
   }
    A operator +(A n)
    {
        A c;
        c.real=real+n.real;
        c.img=img+n.img;
        return c;
    }
    A operator *(A n)
    {
        A c;
        c.real=real*n.real;
        c.img=img*n.img;
        return c;
    }
    A operator -(A n)
    {
        A c;
        c.real=real-n.real;
        c.img=img-n.img;
        return c;
    }
    void operator ==(A n)
    {
        if(real==n.real)
        {
            cout<<"real are equal";
        }
        else if(img==n.img)
        {
            cout<<"img are equal"<<endl;
        }
    }
    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    A m,n;
    m.get();
    n.get();
     m==n;
   A q=m+n;
   A l=m*n;  
   A s=m-n;

   q.print();
   l.print();
   s.print();
}