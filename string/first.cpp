#include<iostream>
using namespace std;
int main() {
    char s[50];
    cout<<"Enter your full name:- ";
    cin.get(s,50);
    cout<<s;
    cin.ignore(); //used to ignore extra chracter
    cout<<endl<<"Enter another name :- ";
    cin.getline(s,50);
    cout<<s;
    //get function doesn't clear input buffers so to avoide this we have to use getline function
return 0;
}