#include<iostream>
using namespace std;

template<class T>
T maximum ( T x ,T y) {
    return x>y ? x :y;
}
int main() {
   int a= maximum<int>(5,6);
   cout<<a<<endl;
   cout<<"float maximum "<<maximum<float> (8.3f,9.6f);
return 0;
}