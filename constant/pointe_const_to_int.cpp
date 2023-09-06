//pointer const : it can modify data but can't put anyone else (pointer locked)
#include<iostream>
using namespace std;
int main() {
    int a;
    int *const b=&a;
*b=5;
cout<<*b<<endl;
(*b)++;
cout<<*b<<endl;
return 0;
}