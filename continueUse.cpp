#include<iostream>
using namespace std;
int main(){
    int number;
    int x;
    cout<<"number, x";
    cin>>number>>x;
    for(int i=1; i<=number; i++){
        if(i%x==0){
            continue;
        }
        cout<<i<<" ";
    } cout<<endl;
    //OR
    for(int i=1; i<=number; i++){
        if(i%x!=0){
            cout<<i<<" ";
        }
    }
    return 0;
}