//for private data outside member can't read and write it
#include<iostream>
using namespace std;
class Rectangle {
   private:
   int length;
   int breadth;
   public:
   void setLength(int l) {
    length=l;
   }
   void setBreadth(int b) {
    breadth=b;
   }
   int area() {
    return (length * breadth);
   }
   int perimeter() {
    return 2*(length + breadth);
   }
};
int main() {
    Rectangle r;
    r.setLength(15);
    r.setBreadth(2);
    cout<<"Area "<<r.area();
return 0;
}