#include<iostream>
using namespace std;
class opov{
    int a,b;
public:
    void setdata(int n,int m){
        a=n;
        b=m;
    }
    void print(){
        cout<<"addition is :-"<<endl;
        cout<<a<<b;
    }
   opov  operator+(opov const  &o1){
       opov o2;
        o2.a=o2.a+o1.a;
        o2.b=o2.b+o1.b;
        return o2;
    }
};
int main(){
    opov b1,b2,b3;
    b1.setdata(10,20);
    b2.setdata(10,20);
    b3=b1+b2;
    b3.print();
}