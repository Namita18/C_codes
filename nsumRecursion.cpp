#include<iostream>
using namespace std;
// int fact1(int n)
// int fib(int n,int a){
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;
//     // return n*fact1(n-1);
//     a= fib(n-1,a)+fib(n-2,a);
//     cout<<a;
// }
bool isPallindrome(string &str, int start, int end){
    if(start>=end)
    return true;
    return(str[start]==str[end])&&isPallindrome(str, start+1,end-1);
}

int main(){
    string str;
    cin>>str;
    int start=0, end;
    int n= str.length();
    cout<<isPallindrome(str,start,n-1);
//    cout<< fact1(n);
// cout<<fib(n,a);
    return 0;
}