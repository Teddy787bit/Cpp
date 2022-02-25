#include<iostream>
#include<ostream>
#include "fstream"
using namespace std;

int main()
{
    string str="Duniya";
    ofstream out("test.txt");
    out<<str;
  return 0;
}


