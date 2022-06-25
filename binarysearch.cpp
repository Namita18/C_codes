#include<iostream>
using namespace std;
int bSearch(int arr[],int n, int x){
    int low=0,high= n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(arr[mid]>x){
            high = mid-1;
            
        }
        else if(arr[mid]<x)
        {low= mid+1;
        }
        else{
            if(arr[mid]==0 || (arr[mid+1]=arr[mid])){
            high =mid-1;}
            else
            return mid;
        }
        }
    

    return -1;
}
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter elements";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter search element";
    cin>>x;
    cout<<bSearch(arr,n,x);
    return 0;
}