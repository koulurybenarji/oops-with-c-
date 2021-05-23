#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"hi A is here";
    }
};
class B:public virtual A
{

};
class C:public virtual  A
{

};
class D :public B,public C
{

};
int main()
{
    D m;
    m.show();// it is ambigious 
}