#include<iostream>
using namespace std;

namespace first {
 void fun() {
    cout<<"c is best language "<<endl;
 }
}

namespace second {
    void fun() {
        cout<<"c++ is the best language "<<endl;
    }
}
int main() {
    //calling first namespace
    first::fun();
    //calling second namespace
    second::fun();

    
return 0;
}