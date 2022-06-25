#include<iostream>
using namespace std;
int firstDigit(int n){
    if(n<=9){
        cout<<n;
    }
    else{
        while(n>10){
          n = n/10;
            }
        }
        return n;
    }

int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    cout<<firstDigit(n);
    return 0;
}