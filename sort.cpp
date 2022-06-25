#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n, temp;
    cout<<"n";
    cin>>n;
    vector <int> arr;
    for( int i=0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
   sort(arr.begin(),arr.end(), greater<int>());
    // for(auto x: arr)
    // cout<<x<<" ";
    for( int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}