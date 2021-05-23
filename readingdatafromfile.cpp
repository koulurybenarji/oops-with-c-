#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    string line;
  ifstream re;
  re.open("student.txt");
  while(!re.eof())
  {
      getline(re,line);
      cout<<line<<endl;
  }
  re.close();
}