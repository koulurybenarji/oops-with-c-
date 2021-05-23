#include<iostream>
#include<string.h>
using namespace std;
class stu
{
  string name;
  string course;

float fee;
public:
    stu(string name,string course) //Parameterized Constructor
    {
     this->name=name;
     this->course=course;
      fee=0;
    }
    stu(string name,string course,float fee) //Parameterized Constructor
    {
     this->name=name;
     this->course=course; //Invoke One Constructor with in one Constructor
    this->fee=fee;
    }
        void showstu()
        {
        cout<<"Name= "<<name<<endl;
        cout<<"Course= "<<course<<endl;
        cout<<"fees= "<<fee<<endl;
        }

};
int main()
{
stu s1("rama","C++");
stu s2("Varun","C++",5000);
s1.showstu();
s2.showstu();
}