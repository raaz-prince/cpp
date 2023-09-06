//if we have overriden function and base class pointer and derived class object and if we call the same function then base class function will be called because of pointer 
#include<iostream>
using namespace std;

class base {
public:
void fun() {
    cout<<"base class function"<<endl; 
}
};

class derived : public base {
public:
void fun() {
    cout<<"derived class function";
}
};
int main() {
    base *b;
    derived d;
    b=&d;
    b->fun();
return 0;
}