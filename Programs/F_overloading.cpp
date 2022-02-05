#include<iostream>
using namespace std;

int add(int a,int b){
return a+b;
}

int add(int a,int b,int c){
    return a+b+c;
}
float add(float f1,float f2){
    return f1+f2;
}

int main(){
int a,b,c;
cout<<"Enter the Three number"<<endl;
cin>>a>>b>>c;
cout<<"\n Addition of two number is :-" <<add(a,b);
cout<<"\n Addition of Three number is :-" <<add(a,b,c);
cout<<"\n Addition of Float number is \n:-" <<add(1.2f,4.5f);

return 0;
}
/**
 * @brief Output
 * Enter the Three number
2
5
6

 Addition of two number is :-7
 Addition of Three number is :-13
 Addition of Float number is :-5.7
 * 
 */
