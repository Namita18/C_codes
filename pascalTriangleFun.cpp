// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
//Pascal Triangle here i= no of rows, j= no of columns, and n=i=j 
//where n is user input
#include<iostream>
using namespace std;
int fact(int n){
    int factorial =1;
    for(int i=1; i<=n; i++){
        factorial *=i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    for(int i=0; i<n;i++){ //for rows
        for(int j=0; j<=i;j++){// for columns
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }  
        cout<<endl;
    }
    return 0;
}