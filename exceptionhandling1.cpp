#include<iostream>
using namespace std;
int  main()
{ 
     int a,b;
    try
    {
        cin>>a>>b;
        if(b==0) throw 0;
        cout<<a/b;
    }
    catch(int x)
    {
        cout<<" not divisible by zero "<<endl;
    }
}