#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=5; i++){
        for (int j=1; j<=n;j++){
            cout<<j;
        }
        n--;
        cout<<"\n";

    }
    return 0;
}
