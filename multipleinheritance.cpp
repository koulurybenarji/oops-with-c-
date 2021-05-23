#include<iostream>
using namespace std;
class stu
{
    protected:
    int id;
    public:
    stu()
    {
        cout<<"enter id";
        cin>>id;
    }

};
class marks
{
    protected:
    int m1,m2,m3;
    public:
    marks()
    {
        cout<<"enter marks";
        cin>>m1>>m2>>m3;
    }

};
class C:public stu,public marks
{
    float avg;
    public:
     C()
     {
         cout<<"total  average of student  "<<"  ";
         avg=float((m1+m2+m3)/3);
         cout<<avg<<endl;
     }
     void res()
     {
       if(avg<33)
       {
           cout<<id<<" is fail with gap "<<33-avg<<" % "<<endl;
       }
       else
       {
           cout<<id<<"  "<<"pass with"<<" "<<avg<<" % "<<endl;
       }
     }

};
int main()
{
    C m[1];
    for(int i=0;i<1;i++)
    {
        m[i].res();
    }
}