//function templates : pass data types so that we don't need to write same code for different data types.
#include<iostream>
using namespace std;
template <typename T>
T add(T x, T y) {
 return (x+y);
}
int main() {
    cout<<"summation of 3 & 4 is "<<add<int>(3,4)<<endl;
    cout<<"summation of "<<add<int>(3, 4.5)<<endl;
    cout<<int(3+4.5)<<endl;
return 0;
}