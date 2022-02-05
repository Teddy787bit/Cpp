/**
 * @file inheritance.cpp
// C++ program to demonstrate implementation
// of Inheritance

// Base class
class Parent
{
public:
	int id_p;
};

// Sub class inheriting from Base Class(Parent)
class Child : public Parent
{
public:
	int id_c;
};

// main function
int main()
{
	Child obj1;
		
	// An object of class child has all data members
	// and member functions of class parent
	obj1.id_c = 7;
	obj1.id_p = 91;
	cout << "Child id is: " << obj1.id_c << '\n';
	cout << "Parent id is: " << obj1.id_p << '\n';
		
	return 0;
}
Multiple
syntax:-
class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  // body of subclass
};

class Vehicle {
  public:
    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};
 
// second base class
class FourWheeler {
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle\n";
    }
};
 
// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
 
};
 #Multilevel inheritance
 
 class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};
 
// first sub_class derived from class vehicle
class fourWheeler: public Vehicle
{  public:
    fourWheeler()
    {
      cout << "Objects with 4 wheels are vehicles\n";
    }
};
// sub class derived from the derived base class fourWheeler
class Car: public fourWheeler {
   public:
     Car()
     {
       cout << "Car has 4 Wheels\n";
     }
};
 Hybrid Inheritance
 // base class
class Vehicle
{
  public:
    Vehicle()
    {
      cout << "This is a Vehicle\n";
    }
};
 
//base class
class Fare
{
    public:
    Fare()
    {
        cout << "Fare of Vehicle\n";
    }
};
 
// first sub class
class Car : public Vehicle
{
  
};
 
// second sub class
class Bus : public Vehicle, public Fare
{   
};
 * 
 */
 #include<iostream>
using namespace std;
class Humnas
{
    public:
    void brith(){
        cout<<"Human has taken brith"<<endl;
    }
};
class Male : public  virtual Humnas
{
    public:
    void gender(){
         cout<<"Gender is male"<<endl;
    }
   
};
class feMale : public virtual Humnas
{
    public:
    void Gender(){
         cout<<"Gender is female"<<endl;
    }
   
};
class student : public virtual Male, public virtual feMale
{
    public:
    void schl(char sname[10]){
        cout<<"Taken admission in "<<sname<<endl;
    }

};
class pro : public virtual Male,public virtual feMale
{
    public:
    void prof(char pname[10]){
        cout<<"Working as a :- "<<pname<<endl;
    }
};
class child: public virtual  Male, public virtual feMale , public virtual student,public virtual pro
{
    public:

};
int main(){
  
    child c1,c2;
    char sname[10]="Pradip";
    char pname[10]="teacher";
    //c1.schl(sname);
    c2.brith();
    c1.brith();
    c1.gender();
    c2.Gender();
    c1.schl(sname);
    c1.prof(pname);
    return 0;
}