/**
 * @file friend.cpp
 * @author Pradip
 * @brief Friend Funcion
 * @version 0.1
 * @date 2022-01-31
 * 
 * @copyright Copyright (c) 2022
 *Note:-
  Friend functions are those functions that have the right to access the private data members of class even though they are not defined inside the class.
  It is necessary to write the prototype of the friend function.
  One main thing to note here is that if we have written the prototype for the friend function in the class it will not make that function a member of the class.
  Syntax:-
  Declaration:-
  friend Class_name function_name(Argument1,Argument2);
Defination:-
    class_name function_name(Argument1,Argument2){
        //Code
    }
  (*)Properties:-
    1-Not in the scope of the class
    2-Since it is not in the scope of the class, it cannot be called from the object of that class, for example, sumComplex() is invalid
    3-A friend function can be invoked without the help of any object
    4-Usually contain objects as arguments
    5-Can be declared under the public or private access modifier, it will not make any difference
    6-It cannot access the members directly by their names, it needs (object_name.member_name) to access any member.
 */
#include<iostream>
using namespace std;
class Addition{
    int a,b;
    friend Addition sumAdd(Addition a1,Addition a2);
 
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printNumber(){
        cout<<"Number is :-" <<a <<" "<<b<<endl;
        
    }

};
void test(Addition a1){
    Addition a2;
    cout<<"Hello This is Friend Function"<<endl;
    
}
Addition sumAdd(Addition a1,Addition a2){
    Addition a3;
    a3.setNumber((a1.a+a2.a),(a2.b+a2.b));
    return a3;
}

int main(){
    Addition a1,a2,sum;
    a1.setNumber(1,4);
    a1.printNumber();
    a2.setNumber(10,15);
    a2.printNumber();
    sum=sumAdd(a1,a2);
    sum.printNumber();
return 0;
}