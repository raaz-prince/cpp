//conditional operators && (and) , || (or) , ! (not)
#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter a number :- ";
    cin>> a;
    if(a>0 && a%2==0)
    cout<<a<< " is even number "<< endl;
    else
    cout<<a<< " is odd number";
return 0;
}