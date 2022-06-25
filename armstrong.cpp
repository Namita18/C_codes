#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum =0;
    int original=n;
    while(n>0){
        float lastdigit= n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    cout<<sum<<endl;

    if( sum == original){
        cout<<"armstrong"<<endl;
    }
    else{
        cout<<"not";
    }
    return 0;
}