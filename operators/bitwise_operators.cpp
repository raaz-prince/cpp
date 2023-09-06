#include<iostream>
using namespace std;
int main() {
    int x=11, y=5 ,z,k,l,m;
    z=(x & y);
    k=(x | y);
    l=(x ^ y);
    m=~x;
    cout <<"bitwise and "<< z<< endl; 
    cout<<"bitwise or "<< k << endl;
    cout<< "bitwise xor "<< l << endl;
    cout << "bitwise not of x is  "<<m<< endl;
return 0;
}