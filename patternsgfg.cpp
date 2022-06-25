#include<iostream>
using namespace std;
int main(){
    int number;
    for(int i=1;i<=5;i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
           
        }
        //  for(int k=5;k>=i;k--){ //inverted
        //         cout<<"*";
        //     }
            for(int k=1;k<=i;k++){ //straight
                cout<<"*";
            }
        cout<<endl;
    }
    
    // for(int i=1;i<=number;i++){
    //    for(int j=1;j<=number;j++){
    //        cout<<"* ";
    //    }
    //    cout<<endl;
    // } cout<<number;
    // cout<<endl;
    // while (number){
    //     cout<<"*"<<endl;
    //     number--;

    // }
    // cout<<number;
    return 0;
}