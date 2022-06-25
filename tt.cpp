#include<iostream>
#define SQUARE(x) x*x;
using namespace std;
int main(){
float s=10, u=30, t=2, a;
a =2*(s-u*t)/ SQUARE(t);
std::cout << std::fixed<<a;
return 0;

}