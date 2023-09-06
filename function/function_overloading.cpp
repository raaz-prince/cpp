//function overloading : it is a feature in oops where two or more function have same name but different parameters
//overloading : Overloading refers to the ability to use a single identifier to define multiple methods of a class that differ in their input and output parameters.
#include<iostream>
using namespace std;
int add(int x,int y) {
    return (x+y);
}
float add(float x,float y) {
  return (x+y);
}

int main() {
    cout << "summation of 2 & 3 is "<<add(2,3)<<endl;
    cout<<"summaation of 2.3 & 3.3 is "<<add(2.3f,3.3f)<<endl;
    cout<<sizeof(float)<<endl;
    
return 0;
}