#include<iostream>
using namespace std;

class der
{
    public:
    der()
    {
        cout<<"dervied class constructor"<<endl;
    }

};
class bas:public der
{
    public:
     bas()
     {
         cout<<"base class constructor"<<endl;
     }

};
int main()
{
    bas b;
}