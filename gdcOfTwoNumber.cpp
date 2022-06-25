#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"enter num1 ";
    cin>>num1;
    cout<<"enter num2 ";
    cin>>num2;
    int flag;
    if(num1<=num2){
        flag= num1;
    }
    else {
        flag =num2;
    }
    cout<<"min of "<<num1<<" "<<num2<<" is: "<<flag<<endl;

    for(int i=flag; i>=1;i--){
        if((num1%i==0) &&(num2%i==0)){
            cout<<i<<endl;
            break;
        }
        
    }
    return 0;
}