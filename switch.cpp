#include<iostream>
using namespace std;
int main(){
	cout<<"Enter a number from 1 to 4";
	int num;
	cin>>num;
	switch(num){
		case 1:
			cout<<"Hello"<<endl;
			break;
		case 2:
			cout<<"Namaste"<<endl;
			break;
		case 3:
			cout<<"Hola"<<endl;
			break;
		case 4:
			cout<<"Salut"<<endl;
			break;
		default:
		cout<<"Hello World"<<endl;
		
	}
	return 0;
}
