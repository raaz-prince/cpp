#include<iostream>
using namespace std;
#define a 0
#define b a+1
#define c 1-b
int main() {
    int d=0,e=d+1,f=1-e;
    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<d<<" "<<e<<" "<<f;
return 0;
}