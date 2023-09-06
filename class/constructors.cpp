//constructors : it has the same name as class and used to assign some usful value to the object
#include<iostream>
using namespace std;
class Rectangle {
 private :
 int length;
 int breadth;
public: 
  /* Rectangle() {
        length=1;  //non-parameterized constructors
        breadth=1;
    }  */
    Rectangle(int l=1,int b=1) {
        setLength(l);
        setBreadth(b);  //parameterized constructors
    }
    Rectangle (Rectangle &r) {
        length=r.length;     //copy constructors
        breadth=r.breadth;
    }
 void setLength(int l) {
    if(l>0)
    length=l;
    else
    length =1;
 }
void setBreadth(int b) {
    if(b>0)
    breadth=b;
    else
    breadth=1;
}
int area() {
    return (length*breadth);
}
int perimeter() {
    return 2*(length + breadth);
}
};
int main() {
    Rectangle r1(6,4);  //parameterized
    Rectangle r2(r1);   //copy constructors
   cout<<"Area of r1 "<<r1.area()<<endl;
   cout<<"Area of r2 "<<r2.area()<<endl;
return 0;
}