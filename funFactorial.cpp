#include<iostream>
using namespace std;
int fact(int n){
    int factorial =1;
    for(int i=1; i<=n; i++){
        factorial*=i; //factorial = factorial *i
    }
    cout<<factorial;
    return 0;
}
int main(){
    int n;
    cin>>n;
    fact(n);
    return 0;
}