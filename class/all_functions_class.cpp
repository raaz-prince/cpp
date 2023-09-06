#include<iostream>
using namespace std;
class Rectangle {
private:
int length;
int breadth;
public:
 Rectangle();
 Rectangle(int l,int b);
 Rectangle(Rectangle &r);
 void setLength(int l);
 void setBreadth(int b);
 int  getLength() {
    return length;
 }
 int getBreadth() {
    return breadth;
 }
 int area();
 int perimeter();
 bool isSquare();
 ~Rectangle();
};


int main() {
   Rectangle r(5,9);
   r.setBreadth(5);
   cout<<"Area is "<<r.area() <<endl;
   cout<<"Perimeter is "<<r.perimeter()<<endl;
   if(r.isSquare()) {
    cout<<"yes "<<endl;
   }
return 0;
}

Rectangle :: Rectangle() {
    length=1;
    breadth=1;
}

Rectangle :: Rectangle(int l,int b) {
    length =l;
    breadth =b;
}

Rectangle :: Rectangle(Rectangle &r) {
    length =r.length;
    breadth =r.breadth;
}

void Rectangle :: setLength(int l) {
    length =l;
}

void Rectangle :: setBreadth(int b) {
    breadth =b;
}
int Rectangle :: area() {
    return (length * breadth);
}

int Rectangle :: perimeter() {
    return 2 * (length + breadth);
}

bool Rectangle :: isSquare() {
    return length==breadth;
}

Rectangle :: ~Rectangle() {
    cout<<"rectangle is destroyed"<<endl;
}