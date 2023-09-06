#include<iostream>
using namespace std;
class Rectangle {
 private:
  int length;
  int breadth;
  
  public:
  void set_Length_Breadth() {
    int l,b;
    do {
        cout<<"Enter length :- ";
        cin>>l;
        if(l>=0)
        length=l;
        else
        cout<<"please provide actual length "<<endl;
    }
    while(l<0);
    do {
        cout<<"Enter breadth :- ";
        cin>>b;
        if(b>=0) 
        breadth=b;
        else 
        cout<<"Please provide actual breadth"<<endl;
    }
    while(b<0);
  }
  int area() {
    return (length * breadth);
  }
  int perimeter() {
    return 2*(length +breadth);
  }
};
int main() {
    Rectangle r;
    r.set_Length_Breadth();
    cout<<"Area is "<<r.area()<<endl;
    cout<<"Perimeter is "<<r.perimeter()<<endl;   
return 0;
}