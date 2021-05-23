#include<iostream>
using namespace std;
class family
{
   private:
    int a;
    public:
    void init()
    {
        a=100; //it can be accesed by member functions
    }
    void change();
    void print()
    {
        cout<<a<<endl;
    }

};
void family :: change()
{
    a=50;//inline functions 
}
int main()
{
    family f[10];
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
        f[i].init();
        f[i].change();
        f[i].print();
      }
      else
      {
           f[i].init();
           f[i].print();
      }
   
     }
}