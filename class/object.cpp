//for security purpose c++ gives features like private , public  in private only that class member and functions can access the data and it is more secure 
// Public :- this data can be access from anywhere
#include<iostream>
using namespace std;

class Rectangle 
{
    public :
 int length;
 int breadth;
 int area() {
    return (length*breadth);
 }
 int perimeter() {
    return 2*(length + breadth);
 }
};
int main() {
    Rectangle r1,r2;  //objects created in stack
   r1.length=10; //if the data will private then we can't access it like this
   r1.breadth=15;
   cout<<"Area of r1 is "<<r1.area()<<endl;
return 0;
}