#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
     ofstream file;
     file.open("student.txt");
     string line;
     int i=0;
     while(i<5)
     {
         getline(cin,line);
         file<<line<<endl;
         i++;
     }

}

