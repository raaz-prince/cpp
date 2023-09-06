#include<iostream>
#include<string>
using namespace std;
int main() {
    string str="Hello";

    cout<<str.length()<<endl;
    cout<<str.capacity()<<endl;
    str.resize(30);
    cout<<str.capacity()<<endl;
    cout<<str.max_size()<<endl;
    str.clear(); //now string is empty , it doesn't contain anything
    cout<<str<<endl;
return 0;
}