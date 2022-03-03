#include<iostream>
#include<stdio.h>
using namespace std;
class Vehicle
{
private:
int engine;
int wheel;
  
public:
 void getData(int en,int wh){
     engine=en;
     wheel=wh;
 }
 void printData(){
     cout<<"Vahicle Having "<<engine<<" Stroke Engine and "<<wheel<<" wheels"<<endl;
 }
};
class car : public Vehicle
{
private:
    /* data */
public:
   
};
int main()
{
    system("cls");
  car c1;
  int en,wh;
  cout<<"Total stroke of engine :- "; cin>>en;  
  cout<<"How many wheels :- "; cin>>wh;
  c1.getData(en,wh);
  c1.printData();
  return 0;
}