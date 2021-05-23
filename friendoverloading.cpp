#include<iostream>
using namespace std;
class  A
{
    public:
    int a;
    A()
    {
        cin>>a;
    }
    friend void operator >(A,B);
};
class B
{
    int b;
    public:
    B()
    {
        cin>>b;
    }

    friend void operator >(A,B);
    
};
void operator >( A m, B n)
{
   m.a>n.b?cout<<"m is greater":cout<<" n is greater";
}
int main()
{
    A m;
    B n;
    m>n;

}