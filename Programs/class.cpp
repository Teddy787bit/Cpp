/**
(1) Class is way to bind data with it associated function together 
 it allow user to hind data from external use
 1 Class Declaration
 2 Class Function Definitions
 class class_name{
     private: // No entry to private class
     variable declaration;
     function declaration;
     public:    // Allow for public area
     variable declaration;
     function declaration;
 };
 class item{
     int number;
     float cost;
     public:
     void getdata(int a,int b);
     void putdata(void);
 }

(2) Creating Object:-
 Class specifies that what it contains.
 We can create object after class declare.
 Syntax:-
 class_name object_name;
eg:-
item i1;
(3) Accessing Class Member
syntax:-
object_name.function_name(argumentlist);
eg:-
i1.getdata(100,75.5);
(4) Defining Member function
-Inside Class
-Outside Class
(i)Outside Class
Declared member function should be define outside class separately
syntax:-
return-type class_name::function_name(argument declaration){
    function body;
}
eg:-
void item :: getdata(int a,int b){
    number =a;
    cost = b;
}
void item :: putdata(void){
    cout<< "Numebr" <<number<<endl;
    cout<<"Cost"<<cost<<endl;
}
-Inside Function Definition
class item{
    int number;
    int cost;
    public:
    void getdata(int a,float b); //Inline //Declaration
    void putdata(void){ //Definition inside the class
        cout<<number<<endl;
        cout<<cost<<endl;
    }
};
 */
#include<iostream>
using namespace std;
const int m = 50;
class ITEMS{
    int itemcode[m];
    float itemprice[m];
    int cnt;
    public:
    void CNT(void){cnt=0;}
    void getItem(void);
    void displaySum(void);
    void remove(void);
    void displayItem(void);
};
void ITEMS ::getItem(void){
    cout<<"Enter Item Code"<<endl;
    cin>>itemcode[cnt];
    cout<<"Enter item price"<<endl;
    cin>>itemprice[cnt];
    cnt++;
}
void ITEMS::displaySum(void){
    float sum=0;
    for(int i=0;i<cnt;i++){
        sum=sum+itemprice[i];
       
    }
     cout<<"\n Total value:-"<<sum<<endl;
}
void ITEMS::remove(void){
    int a;
    cout<<"Enter Item code"<<endl;
    cin>>a;
    for(int i=0;i<cnt;i++){
        if(itemcode[i]==a){
            itemprice[i]==a;
        }
    }
}
void ITEMS::displayItem(void){
    cout<<"\n Code Price\n"<<endl;
    for(int i=0;i<cnt;i++){
        cout<<"\n"<<itemcode[i];
        cout<<" "<<itemprice[i];
    }
    cout<<"\n";
}

int main(){
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout<<"\n You can do the following";
        cout<<"\n Enter appropriate number";
        cout<<"\n 1 : Add an Item \n 2 : Display total \n 3 : Delete an Item \n 4 : Display all Items \n 5 : Quit \n\n Select Option"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            order.getItem();
            break;
        case 2:
            order.displaySum(); break;
        case 3:
            order.remove(); break;
        case 4:
            order.displayItem(); break;
        default:
            //cout<<"\n Select right option"<<endl;
            break;
        }
    } while (x!=5);
    return 0;
}