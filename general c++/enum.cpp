//enum is used to define a group of constant under one name
#include<iostream>
using namespace std;
 enum day {mon=1,tue,wed=5,thu,fri,sat=9,sun};
int main() {
    day d;
    d=thu;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
return 0;
}