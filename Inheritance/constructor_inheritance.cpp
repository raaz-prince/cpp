#include<iostream>
using namespace std;
class Parent {
public:

Parent() { 
cout<<"Default of Parent "<<endl;
}

Parent(int x) {
    cout<<"param of Parent "<<x<<endl;
}

};

class Child : public Parent {
public:

Child() {
    cout<<"default Child class "<<endl;
}

Child(int x) {
    cout<<"param of Child class "<<x<<endl;
}

Child(int a,int b) : Parent(a) {
    cout<<"param of Child class "<<b<<endl;
}
};

int main() {
  Child d; // both default 
  Child e(5);  //Parent default and Child parameterized
  Child f(4,5);  //both parameterized

return 0;
}