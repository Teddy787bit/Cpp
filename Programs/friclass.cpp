#include<iostream>
using namespace std;
class Test
{
private:
int x,y;
    /* data */
public:
   friend class Test2;
   void setData(int a,int b){
       x=a;
       y=b;
   }
};

class Test2
{
private:
    /* data */
public:
   void print(Test t){
       cout<<"Datamember of Test class x = "<<t.x
       <<" & y  = "<<t.y<<endl;
   }
};



int main()
{
    Test t1;
    t1.setData(10,20);
    Test2 t2;
    t2.print(t1);
  return 0;
}