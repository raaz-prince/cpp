//if we have base class pointer and derived class object , to call a derived class overriden function ,we have to make base class function to virtual
#include<iostream>
using namespace std;

class Base {
public:
virtual void fun() {
    cout<<"base class function "<<endl;
}
};

class derived : public Base {
public :
void fun() {
    cout<<"derived class function"<<endl;
}
};
int main() {
    Base *b;
    derived d;
    b=&d;
    b->fun();
return 0;
}