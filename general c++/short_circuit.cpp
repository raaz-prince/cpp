/* it is the function of compiler that in logical operator (and ) if first conditon is false then the compiler will not check second conditon
because the whole will be false if on one will false. and in (or) if first is true then the second conditon will not be checked. */
#include<iostream>
using namespace std;
int main() {
    int a=2,b=7,c=8;
    if(b<c && ++a<b)  // here first statement is true so compiler also have to check second conditon so it increase the value of a
    cout<<a;
    
    if(c<b && ++a<b) { // here first condition is false so compiler don't check the second conditon and value of a will not increases by 1
        cout<<b;
    }
    cout<<endl<<a; //value of a is same as above

    if(b<c || ++c>a) //here increment in c doesn't happen because first condition is true and second is not checked by compiler
    cout<<endl<<c;
return 0;
}