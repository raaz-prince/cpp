//redifing a function of parent class in child class called function over riding
#include<iostream>
using namespace std;

class Parent {
    public:
    void fun() {
        cout<<"Parent class function";
    }
};

class Child : public Parent {
public:
void fun() {
    cout<<"function of Child class";
}
};
int main() {
    Parent b;
    Child d;
    b.fun();
    cout<<endl;
    d.fun();
return 0;
}