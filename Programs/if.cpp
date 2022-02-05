#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    if(a>0 && a<10){
        cout<<"Numbre is between  zero to ten"<<endl;
    }
    if(a>0 || a<10){
       cout<<"Numbre might be positive or less then 10"<<endl;
   }
    if(!(a<0)){
        cout<<"Number is negative "<<endl;
    }
    cout<<"a<0 = "<<(a<0)<<endl;
    cout<<"!(a<0) = "<<!(a<0)<<endl;
    return 0;
}
