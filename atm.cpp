#include <bits/stdc++.h>
using namespace std;
int main(){
    float withdrawl, bal;
    cout<<"enter amount to withdraw";
    std::cin >> withdrawl;
    cout<<"enter inital balance";
    cin>>bal;
    if(withdrawl>=bal){
        cout<<"Insufficient Funds";
    }
    else{
    if(withdrawl<=bal){
        bal= bal-(withdrawl+0.50);
        cout<<bal<<endl;
    }
        
    if(fmod(bal,5)){
        cout<<" Incorrect Withdrawal Amount (not multiple of 5)";
    }
}
    return 0;
}