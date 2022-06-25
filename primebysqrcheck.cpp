#include<iostream>
using namespace std;
#include<cmath>
int main(){

    int n,i,flag=0;
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if (n%i==0){
            cout<<"Non-Prime";
            
            break;
        }
        flag=1;
    }
    if(flag==1){
        cout<<"Prime Number";
    }
    return 0;
}
