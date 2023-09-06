//pointer to a constant integer : here int is const means we cant change the value of integer to whom pointer is pointing but we can change to whom it will point (read only v)
#include<iostream>
using namespace std;
int main() {
    const int *p;
    int a=6,*q;
    const int b=8;
   // q=&b; we can't put const to a normal pointer
    p=&a;
   // (*p)++;  bcz int is const
    cout<<*p<<endl;
    p=&b;
    cout<<*p<<endl;
return 0;
}