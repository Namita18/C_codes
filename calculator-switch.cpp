#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"enter 2 number"<<endl;
	cin>>a>>b;
	cout<<"Enter the operation \n+ \n-\n%\n/\n*"<<endl;
	char op;
	cin>> op;
	switch(op)
	{
		case '+' :
			cout<<"Answer is:"<<a+b;
		break;
		case '-' :
			cout<<"Answer is:"<<a-b;
		break;
		case '*' :
			cout<<"Answer is:"<<a*b;
		break;
		case '%' :
			cout<<"Answer is:"<<a%b;
		break;
		case '/' :
			cout<<"Answer is:"<<a/b;
		break;
		default:
			cout<<"Invalid operation, try again!";
		 
	}
	return 0;
}
