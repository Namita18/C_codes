#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 

	int n;
	cin>>n;
	int i;
	for(i=2;i<n;i++)
	{
		if (n%i==0)
		{
			cout<<"Not a prime";
			break;
		}
		
	}
	if(i==n)
	{
		cout<<"Prime Number"<<endl;
	}
	
	
	return 0;
}
