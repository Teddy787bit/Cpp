#include<iostream>
using namespace std;
class Humnas
{
    public:
    void brith(){
        cout<<"Human has taken brith"<<endl;
    }
};
class Male : public virtual Humnas
{
    public:
    void gender(){
         cout<<"Gender is male"<<endl;
    }
   
};
class feMale : public virtual Humnas
{
    public:
    void Gender(){
         cout<<"Gender is female"<<endl;
    }
   
};
class student : public Male, public feMale
{
    public:
    void schl(char sname[10]){
        cout<<"Taken admission in "<<sname<<endl;
    }

};
class pro : public Male,public feMale
{
    public:
    void prof(char pname[10]){
        cout<<"Working as a :- "<<pname<<endl;
    }
};
class child: public virtual  Male, public feMale
{
    public:

};
int main(){
  
    child c1,c2;
    char sname[10]="Pradip";
    char pname[10]="teacher";
    //c1.schl(sname);
    c2.brith();
    c1.brith();
    c1.gender();
    c1.Gender();
    return 0;
}
