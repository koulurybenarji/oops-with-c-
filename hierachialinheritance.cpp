#include<iostream>
using namespace std;
class acc
{
  protected:
  int id ;
  string name;
  int bal;

};
class sav :public acc 
{
    public:
   void account()
   {
     cout<<" enter id"<<endl;
     cin>>id;
     cout<<"enter name";
     cin>>name;
     cout<<"enter balance"<<endl;
     cin>>bal;
     if(bal<500)
     {
       cout<<"minimum 500"<<endl;
     }
     else
     {
       cout<<" savings account created"<<endl;
     }
   }
   void show()
   {
     cout<<" saving account"<<endl;
     cout<<"account id of the user :"<<id<<endl;
     cout<<"account name  :"<<name<<endl;
     cout<<"account bal  :"<<bal<<endl;
   }


};
class curr :public acc
{
  public:
  void account()
  {

     cout<<" enter id"<<endl;
     cin>>id;
     cout<<"enter name"<<endl;
     cin>>name;
     cout<<"enter balance"<<endl;
     cin>>bal;
     if(bal<500)
     {
       cout<<"minimum 500"<<endl;
     }
     else
     {
       cout<<" current account created "<<endl;
     }

  }
    void show()
   {
     cout<<" saving account"<<endl;
     cout<<"account id of the user :"<<id<<endl;
     cout<<"account name  :"<<name<<endl;
     cout<<"account bal  :"<<bal<<endl;
   }

};
int main()
{
  int cho;
  cout<<"which ccount do want to open"<<endl;
  cout<<"1--->current account"<<endl;
  cout<<"2---->savings account "<<endl;
  cin>>cho;
  if(cho==1)
  {
    acc a;
    curr m;
    m.account();
    m.show();

  }
  else
  {
    acc a;
    sav n;
    n.account();
    n.show();

  }
}