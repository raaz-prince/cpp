// this is a keyword which is a pointer which points to the object which invokes the member function  also used to return object
#include<iostream>
using namespace std;
class Rectangle {
 private:
 int length;
 int breadth;
 public:
 Rectangle(int length, int breadth) {
    this->length=length;
    this->breadth=breadth;
 }
 int area() {
    return length * breadth;
 }
};
int main() {
    Rectangle r(10,5);
    cout<<"Area is "<<r.area()<<endl;
    cout<<&r;
return 0;
}