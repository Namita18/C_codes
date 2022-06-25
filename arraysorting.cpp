#include<iostream>
using namespace std;
bool checkSorting(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
      
    }
      return true;
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements of array"<<endl;
    for(int i=0; i<n; i++){
      cin>>arr[i];
      cout<<" ";
    }
    cout<<endl;
    cout<<"the array is:"<<endl;
    for(int i=0; i<n;i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    cout<<"checking if the array is sorted or not"<<endl;
    if(checkSorting(arr,n)==false){
        cout<<"Not sorted";
    }
    else
    cout<<"Sorted";
    return 0;
}
