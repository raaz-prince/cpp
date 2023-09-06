//(->) this is called arrow or (dereference) operator
#include<iostream>
using namespace std;
class Rectangle {
  public:
  int length;
  int breadth;
  int area() {
    return (length * breadth);
  }
  int perimeter() {
    return 2*(length + breadth);
  }
};
int main() {
    Rectangle r;
    Rectangle *p=&r; //both r and pointer created in stack
    (*p).length=10;
    p->breadth=15;
    cout<<"Area of rectangle is "<<(*p).area()<<endl;
    cout<<"Perimeter of rectangle is "<<p->perimeter()<<endl;
    
return 0;
}