#include<iostream>
using namespace std;
int main()
{  int n;
   cin>>n;
	for( int counter=0; counter<=n; counter ++)
	{   if((counter%3 ==0)&&(counter%2 ==0))
	{
		continue;
	}
	 if(counter==7*7){
	 	break;
	 }
		cout<<counter<<endl;
		
	}
	return 0;
	
}
