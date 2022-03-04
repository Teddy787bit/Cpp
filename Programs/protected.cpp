#include<iostream>
using namespace std;
class Parent
{
protected:
int pro=1;

private:
int pvt=0;

public:
int pub=2;

};
class PubDerived  : public Parent
{
private:
    /* data */
public:
PubDerived(){
    cout<<"Publica Mode Derived Base Class:-"<<endl;
}
void getPro(){
    cout<<"Can Access Protected data member "<<pro<<endl;
}
void getPub(){
    cout<<"Can Access Public data member "<<pub<<endl;
}
void getPvt(){
    cout<<"Can not access Private data member "<<endl;
}
};
class  ProDerived : protected Parent
{
private:

public:
ProDerived(){
   cout<<"Protected Mode  Derived Base Class:-"<<endl;
}
    void getPro(){
    cout<<"Can Access Protected data member "<<pro<<endl;
}
void getPub(){
    cout<<"Can Access Public data member "<<pub<<endl;
}
void getPvt(){
    cout<<"Can not access Private data member "<<endl;
}
};

class PriDerived : private Parent
{
private:
    
public:
PriDerived(){
    cout<<"Private Mode  Derived Base Class:-"<<endl;
}
    void getPro(){
    cout<<"Can Access Protected data member "<<pro<<endl;
}
void getPub(){
    cout<<"Can Access Public data member "<<pub<<endl;
}
void getPvt(){
    cout<<"Can not access Private data member "<<endl;
}
};






int main()
{
    PubDerived ob1;
    ob1.getPub();
    ob1.getPro();
    ob1.getPvt();
    ProDerived ob2;
    ob2.getPro();
    ob2.getPub();
    ob2.getPvt();
    PriDerived ob3;
    ob3.getPro();
    ob3.getPub();
    ob3.getPvt();
    
  return 0;
}