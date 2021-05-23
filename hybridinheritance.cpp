#include<iostream>
using namespace std;
class stu
{
    int id;
    string name;
    public:
    void get()
    {
        cout<<"enter id"<<endl;
        cin>>id;
        cout<<"enter name"<<endl;
        cin>>name;
    }

};
class marks :public stu 
{
    protected:
    int m1,m2,m3;

    public:
    void getmarks()
    { 
      cout<<"enter marks";
      cin>>m1>>m2>>m3;
    }


};
class sports
{
    protected:
     int smarks;
     int id;
     public:
     void  sport()
      {
          cout<<"enter id";
          cin>>id;
          cout<<"enter smarks";
          cin>>smarks;
      }


};
class res:public marks,public sports
{
    int total;
    public:
     void result()
     {
         total=(m1+m2+m3)/3;
         cout<<" total marks scored by student : "<<"  "<<total+smarks<<endl;
     }


};
int main()
{
    res r;
    r.get();
    r.getmarks();
    r.sport();
    r.result();

}