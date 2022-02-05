#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows & columns"<<endl;
    cin>>r>>c;
    int arr[r][c];
    cout<<"Entering value in array"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"\n Enter value"<<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"-----Array Details----";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"\nValue at arr["<<i<<"]["<<j<<"] :- "<<arr[i][j]<<endl;
        }
    }
return 0;
}


/**
 * @brief Output
 Enter rows & columns
2
2
Entering value in array

 Enter value
125

 Enter value
126

 Enter value
124

 Enter value
128
-----Array Details----
Value at arr[0][0] :- 125

Value at arr[0][1] :- 126

Value at arr[1][0] :- 124

Value at arr[1][1] :- 128
  
 */