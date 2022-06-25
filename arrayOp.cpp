#include<iostream>
using namespace std;
int invert(int pos,int elem,int idx, int arr[],int n){
cout<<"enter position of element upto"<<n<<endl;
cin>>pos;
cout<<"enter the element";
cin>>elem;
idx= pos-1;
for(int i=n-1; i>=idx; i--){
    arr[i+1]= arr[i];
}
arr[idx]= elem;

for(int i=0; i<=n;i++){
    cout<<arr[i]<<" ";
}
 return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
int pos, elem,idx;
invert(pos,elem,idx,arr,n);
return 0;
}