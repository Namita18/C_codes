#include<iostream>
using namespace std;
int fact(int n){
    int factorial =1;
    for(int i=1; i<=n; i++){
        factorial *=i;
    }
    return factorial ;
}
int main(){
    int n, r;
    cin>>n>>r;
    int ans;
    ans = fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;
    return 0;
}