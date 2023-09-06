#include<iostream>
#include<string>
using namespace std;
int main() {
    string str;
    cout<<"Enter name :- ";
    //cin>>str;  //read single word
    getline(cin,str); // read multiple word
    cout<<str;
return 0;
}