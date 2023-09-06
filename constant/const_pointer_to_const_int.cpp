//const pointer to const integer  : neither it can change data nor pointr to other integer
#include<iostream>
using namespace std;
int main() {
    int a=987;
    const int *const b = &a;
    cout<<*b<<endl;
return 0;
}