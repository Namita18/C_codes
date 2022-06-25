#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"number";
    cin>>number;
    // for greatest divisor other than number
    for(int i=(number-1); i>2; i--){
        if(number%i==0){
            cout<<i<<endl;
            break;
        }
    }

    //for smallest divisor other than 1
    for (int i = 2; i < number; i++){
        if(number%i==0){
            cout<<i<<endl;
            break;
        }
    }
    {
        /* code */
    }
    
    return 0;
}