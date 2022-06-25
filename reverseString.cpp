#include<iostream>
using namespace std;
int main(){
    string s1="namita";
    string s2="";
    cout<<"enter s1 \n";
    cin>>s1;
    int l = s1.length()-1;
    while(l>=0){
        cout<<endl;
        s2 = s2+s1[l];
        l--;
    }
    cout<<s2;
    return 0;
}