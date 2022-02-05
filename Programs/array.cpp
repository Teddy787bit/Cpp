// Array
#include<iostream>
using namespace std;
int main()
{
    int element[5], i, n, v; // Array Declaration

    for (i = 0; i < 5; i++) // Array Inilialization
    {
       cout<<"Enter the element"<<endl;
        cin>>element[i];
    }
    for (i = 0; i < 5; i++) // Printing of array elements
    {
       cout<<"\n Element Location and element value = "<<i <<" "<<element[i];
    }

    // Accessing and upadting new value of array
    cout<<"\n Enter index to change array elements:-"<<endl;
    cin>>n;
    cout<<"\n Enter the updated value:-"<<endl;
    cin>>v;
    element[n] = v;

    for (i = 0; i < 5; i++) // Printing of array elements
    {
        cout<<"\n Element Location and element value = "<<i<<" "<<element[i]<<endl;
    }
    return 0;
}