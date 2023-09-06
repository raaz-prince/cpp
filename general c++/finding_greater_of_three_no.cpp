#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter three no. :- ";
    cin>> a >> b >> c;
    cout<< "largest number is :- "<<endl;
    if(a>b && a>c)
    cout << a << endl;
    else if( b>c)
    cout << b << endl;
    else
    cout << c<< endl;
return 0;
}