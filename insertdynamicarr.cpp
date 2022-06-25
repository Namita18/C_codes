#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int *arr= new int (n);
  for(int i=0; i<n;i++){
      cin>>arr[i];
  }
  for(int i=0; i<n;i++){
      cout<<arr[i]<<" ";
  }
  cout<<endl;
  int pos,elem,idx,cap;
  cap=n;
  idx=pos-1;
  cout<<"enter pos"<<endl;
  cin>>pos;
  cout<<"enter elem"<<endl;
  cin>>elem;
if(cap==n)
{return -1;}
for(int i=n-1;i>=idx;i--){
      arr[i+1]=arr[i];
  }
  arr[idx]= elem;
  for(int i=0; i<n;i++){
      cout<<arr[i]<<" ";
  }
  return 0;
}