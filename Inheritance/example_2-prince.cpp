#include<iostream>
using namespace std;

class Rectangle {

 private :
 int length;
 int breadth;

 public :

 Rectangle(int l,int b) {
    length=l;
    breadth=b;
 }

 int area() {
    return length*breadth;
 }

 int perimeter()  {
    return 2*(length + breadth);
 }

 int getlength() {
    return length;
 }

 int getbreadth() {
    return breadth;
 }
};


class Cuboid : public Rectangle {

 private :

 int height;

 public :

 Cuboid(int l,int b,int h):Rectangle(l,b) {
    height=h;
   // void set(int l,int b); 
 }

 int volume() {
    return height*getlength()*getbreadth();
 }
};


int main() {
    Cuboid c(2,3,5);
   
    cout<<"volume of cuboid is "<<c.volume()<<endl;
    cout<<"area is "<<c.area();
return 0;
}