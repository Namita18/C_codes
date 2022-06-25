#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    int Fact;
    cin>>n;
    int ans =1;
  while(n>0){
      ans= ans*n;
      n--;
  }
   cout<<ans;

    // while(number>0){
    // number= number*(number-1);
    // number--;
    return 0;
} 
