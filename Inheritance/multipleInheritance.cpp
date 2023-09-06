#include<iostream>
using namespace std;

class A {
public :
void msg() {
    cout<<"Hello"<<endl;
}
};

class B {
    public:
    void msg() {
        cout<<"Welcome"<<endl;
    }
};

class C : public A,public B {
private:
int x;
public :
C(int x) {
    this->x=x;
}
 void msg() {
    A::msg();
    B::msg();
 }
};

int main() {
    C c(5);
    c.msg();
return 0;
}