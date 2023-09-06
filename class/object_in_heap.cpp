//objects creating in heap
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
    Rectangle *p,*q;
    p=new Rectangle;  //created in heap
    q=new Rectangle;
    p->length=10;
    p->breadth=5;
    cout<<"Enter the length of first rectangle :- ";
    cin>>q->length;
    cout<<"Enter the breadth of first rectangle :- ";
    cin>>q->breadth;
    cout<<"Area of firstt rectangle is "<<q->area()<<endl;
    cout<<"Perimeter of first recatangle is "<<q->perimeter()<<endl;
    cout<<"Area of second rectangle is  "<<p->area()<<endl;
    cout<<"perimeter of second rectangle is "<<p->perimeter()<<endl;
return 0;
}