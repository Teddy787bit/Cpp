#include <iostream>
using namespace std;
class Testfri
{
    int x,y;
    friend void test1();
    /* data */
public:
    friend void test2();
};
void test2()
{   
    cout << "This is public  section" << endl;
}
void test1(){
     cout << "This is private section" << endl;
}

int main()
{
    
    test1();
    test2();
    return 0;
}