#include<iostream>
using namespace std;

int main(){
 
    int *arr = new int[3];
    arr[0] =10;
    arr[1] =20;
    arr[2] =50;
    arr[3] =60;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1]<< endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    delete arr;
     cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1]<< endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    cout << "The value of arr[3] is " << arr[3] << endl;
    return 0;
}