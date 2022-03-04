 #include<iostream>
 using namespace std;
 template <class t>
 class  Vector
 {
 private:
 
 public:
  t x,y;
//   t SetD(t a,t b){
// x=a;
// y=b;
//   }
t add(){
  return x+y;
}
  
 };

 
 int main()
 {
     Vector <int> t1;
     t1.x=3;
     t1.y=4;
     cout<<"Addition is "<<t1.add()<<endl;
     Vector <float> t2;
     t2.x=3.4f;
     t2.y=3.4f;
     cout<<"Addition is "<<t2.add()<<endl;
     Vector <char>c1;
     c1.x='a';
     c1.y='b';
      cout<<"Addition is "<<c1.add()<<endl;
   return 0;
 }