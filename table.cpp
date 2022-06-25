#include<iostream>
using namespace std;
int main(){
    int no;
    cout<<"enter number";
    cin>>no;
    for (int i=1; i<=no;i++){
        for( int j=1; j<=10; j++ ){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}