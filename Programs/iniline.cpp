/**
 syntax :-
 inline function_type function_name(argumnet1,argumnet2){
     //code;
 }
 *
 */
#include <iostream>
using namespace std;
inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b, c;
    cout << "Enter the Three number" << endl;
    cin >> a >> b >> c;
    cout << "\n Addition of two number is :- " << add(a, b)<<"\n";

    return 0;
}
/**
 * @brief Output
  Enter the Three number
5
6
4

 Addition of two number is :- 11
 * 
 */