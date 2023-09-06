#include<iostream>
using namespace std;

class Base {
 public:
 Base() {
    cout<<"base class constructor "<<endl;
 }
virtual ~Base() {
    cout<<"base class destructor"<<endl;
 }
};
class Derived :public Base {
public:
Derived() {
    cout<<"derived class constructor "<<endl;
}
~Derived() {
    cout<<"derived class destructor"<<endl;
}
};
int main() {
    // Base *b=new Derived();
    // delete b;
    Derived d;
return 0;
}
