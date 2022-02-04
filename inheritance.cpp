#include<iostream>
using namespace std;
class Humnas
{
    public:
    void brith(){
        cout<<"Human has taken brith"<<endl;
    }
};
class Male : public Humnas
{
    public:
    void gender(){
         cout<<"Gender is male"<<endl;
    }
   
};
class feMale : public Humnas
{
    public:
    void Gender(){
         cout<<"Gender is female"<<endl;
    }
   
};
class student : public Male,feMale
{
    public:
    void schl(char sname[10]){
        cout<<"Taken admission in "<<sname<<endl;
    }

};
class pro : public Male,feMale
{
    public:
    void prof(char pname[10]){
        cout<<"Working as a :- "<<pname<<endl;
    }
};
class child: public Male,feMale
{
    public:

};
int main(){
  
    child c1;
    char sname[10]="Pradip";
    char pname[10]="teacher";
    //c1.schl(sname);
    c1.brith();

    return 0;
}
