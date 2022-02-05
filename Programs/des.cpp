/*
Destructor
synatx:-
~class_name(){}
*/
#include <iostream>
using namespace std;
class Disha{
    int cnt;
    int scode;
    public:
 
    Disha(int sc){
      scode = sc;
      cout<<"Inquire about course"<<endl;
    }
    ~Disha(){
        cout<<"Course completed"<<" "<<"Id:-"<<scode<<endl;
    }
    void Courseper(char cname[10]){
        cout<<"Student :-"<<scode<<" "
        <<"has taken addmision for "<<cname<<endl;
    }
};

int main(){
char cn[10];
int sc;
cout<<"Enter Student Code and Course name"<<endl;
cin>>sc>>cn;
Disha s1=Disha(sc);
s1.Courseper(cn);
return 0;
}