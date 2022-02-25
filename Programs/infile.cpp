#include<iostream>
#include<ostream>
#include "fstream"
using namespace std;

int main()
{
    string str;
    ifstream in("test.txt");
   in>>str;
   //getline(in,str);
    cout<<str;
  return 0;
}

