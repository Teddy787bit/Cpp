#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1;
    n1=100;
    cout<<"Size of int is "<<sizeof(n1)<<endl;
    int *p=new int;
    *p=100;
    cout<<"Size of int is "<<sizeof(p)<<endl;
    delete p;
    return 0;
}
