#include<iostream>
using namespace std;
struct emp
{           // Strucuter Declaration
    int id; // Member Declaration
    char name[10];
    char post[25];
};
int main()
{
    struct emp e; // Creating variable of type emp
    cout << " Enter employee id:-" << endl;
    cin >> e.id; // Accessing member of strucuter emp id
    cout << "\n Enter employee name:-";
    cin >> e.name; // Accessing member of strucuter emp name
    cout << "\n Enter employee designation:-";
    cin >> e.post; // Accessing member of strucuter emp post
    cout << "\n=====Employee Details======" << endl;
    cout << e.id;
    cout << "\n Name:- " << e.name << "\n Designation :-" << e.post;
}
//Strucuter