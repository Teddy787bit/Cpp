/**
 * @file constructor
 *syntax:-
 class_name(){
     //code;
 }
 */
#include <iostream>
using namespace std;
class FD
{
    long int pamt;
    int yrs;
    float rate;
    float ramt;

public:
    FD()    //Deafult Constructor
    {
        cout << "This is deafult constrcutor" << endl; // Creating deafult  Constructor
    }
    FD(long int p, float r, int y)
    { // Construcuter with paramerter
        cout << "This is parameterized constrcutor" << endl;
        pamt = p;
        yrs = y;
        rate = r;
        ramt = pamt;
        for (int i = 0; i <= yrs; i++)
        {
            ramt = ramt * (1.0 + r);
        }
    }
    FD(long int p, int r, int y)
    { // Construcuter Overloading
        cout << "This is overload constrcutor" << endl;
        pamt = p;
        yrs = y;
        rate = r;
        ramt = pamt;
        for (int i = 0; i <= yrs; i++)
        {
            ramt = ramt * (1.0 + float(r) / 100);
        }
    }
    void display()
    {
        cout << "\n"
             << "Principal Amount is :-" << pamt << "\n"
             << "Return Amount is :- " << ramt << "\n";
    }
};
int main()
{
    long int p;
    int r;
    float R;
    int y;
    FD fd1, fd2, fd3;
    cout << "Enter Principal amount periods rate of interset(in %)" << endl;
    cin >> p >> y >> R;
    fd1 = FD(p, y, R);

    cout << "Enter Principal amount periods rate of interset(in decimal)" << endl;
    cin >> p >> y >> r;
    fd2 = FD(p, y, r);

    cout << "Fund Details" << endl;
    fd1.display();
    fd2.display();
    return 0;
}