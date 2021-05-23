#include<iostream>
using namespace std;
#include<string>
template<class t1,class t2>
float sum(t1 a[],t2 n)
{
  t1 sum1=0;
  for(int i=0;i<n;i++)
  {
      sum1=sum1+a[i];
  }
  return sum1;
}
template <class t1,class t2>
float maxmin(t1 a[],t2 size)
{
    t1 max=a[0];
    t1 min=a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
          max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    int cho;
    cout<<"what u want ot return max or min "<<endl;
    cout<<"1---->max"<<endl;
    cout<<"2---->min"<<endl;
    cin>>cho;
    return cho==1 ? max: min;
}
int main()
{
  int a[10]={-1,2,3,4,5,45};
  float b[10]={-1.5,2.5,3.5,4.5,5.5,8.5};
  cout<<sum(a,6)<<endl;
  cout<<sum(b,6)<<endl;
  cout<<maxmin(a,6)<<endl;
  cout<<maxmin(b,6)<<endl;
} 