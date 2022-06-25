#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int array[n];
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array for size"<<n<<endl;
    for(int i=0; i<n;i++){
        cin>>array[i];
    }

    int maxNo=INT_MIN, minNo= INT_MAX;
    for(int i=0;i<n;i++)
    {
        maxNo= max(maxNo, array[i]);
        minNo= min(minNo, array[i]);
    }
   cout<<maxNo<<endl<<minNo<<endl;

    return 0;
}


