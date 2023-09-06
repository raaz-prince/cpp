//friend function takes two argumens and written outside the class without using scope resolution operator
#include<iostream>
using namespace std;
class complex {
private:
int real;
int img;
public:
complex (int r=0 , int i=0) {
    real=r;
    img=i;
}
void display() {
    cout<<real<<" + i"<<img;
}
friend complex operator+ (complex c ,complex d) ;
};
complex operator+ (complex c,complex d) {
    complex temp;
    temp.real=c.real + d.real;
    temp.img=c.img + d.img;
    return temp;
}
int main() {
    complex c(3,4),d(5,5),e;
    e=c+d;
    e.display();
return 0;
}
