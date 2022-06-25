#include<iostream>
#include<stdlib.h>
using namespace std;
class test{
    protected:
    int x;
    public:
    test(int i):x(i){}
    void fun()const{cout<<"fun() const"<<endl;}
    void fun(){cout<<"fun()"<<endl;}
};

int main(){
 test t1(10);
 const test t2(20);
 t1.fun();
 t2.fun();
    return 0;
}