#include<iostream>
using namespace std;
class Parent {
 public:
 void display() {
    cout<<"prince kumar"<<endl;
 }
};

class Derive : public Parent {
  public :
  void display() {
    cout<<"c++ is best language"<<endl;
  }
};


int main() {
    Parent b;
    Derive c;
    b.display();
    c.display();  //function overriding
    c.Parent::display();
  //  b.show();  here it shows error because Derive class is Child from Parent class not the Parent class is Child
return 0;
}