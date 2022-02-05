#include<iostream>
using namespace std;
class Humnas
{
    public:
    void birth(){
        cout<<"Human has taken birth"<<endl;
    }
};
class Male : public virtual Humnas
{
    public:
    void gender(){
         cout<<"Gender is male"<<endl;
    }
   
};
class feMale : public virtual  Humnas
{
    public:
    void Gender(){
         cout<<"Gender is female"<<endl;
    }
   
};
class student : public virtual Male, public virtual feMale
{
    public:
    void schl(char sname[20]){
        cout<<"Taken admission in "<<sname<<endl;
    }

};
class pro : public virtual Male,public virtual feMale
{
    public:
    void prof(char pname[10]){
        cout<<"Working as a :- "<<pname<<endl;
    }
};
class child: public virtual  Male, public virtual feMale , public virtual student,public virtual pro
{
    public:

};
int main(){
  
    child c1,c2;
    char sname[20]="Disha_School";
    char pname[10]="teacher";
    //c1.schl(sname);
    c2.birth();
    c1.birth();
    c1.gender();
    c1.Gender();
    c1.schl(sname);
    return 0;
}
