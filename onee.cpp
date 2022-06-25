#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	// cin>>t;
	// while(t--){
	    int N,X,index=0;
	    cin>>N>>X;
	    int A[N];
	    for(int i=0; i<N;i++){
	        cin>>A[i];
	    } 
	    for(int i=0; i<N;i++){
	        cout<<A[i]<<endl;
	    }
	    // for(int i=0; i<N;i++){
	    //     if(A[i]<X){
	           
	    //         index=i+1;
	    //     }
	    // }
	    // cout<<index<<endl;
	// }
	return 0;
}
