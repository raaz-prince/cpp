//append function str.append("string")  this function is used to add the required string at the end of main string  . ( this is same as strcat in char array)
#include<iostream>
#include<string>
using namespace std;
int main() {
    string str="hello";
    cout<<str<<endl;
    str.append(" bro,this is prince here");
    cout<<str<<endl;
return 0;
}