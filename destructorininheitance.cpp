#include<iostream>
using namespace std;

class der
{
    public:
    ~der()
    {
        cout<<"dervied class destructor"<<endl;
    }

};
class bas:public der
{
    public:
     ~bas()
     {
         cout<<"base class destructor"<<endl;
     }

};
int main()
{
    bas b;
}