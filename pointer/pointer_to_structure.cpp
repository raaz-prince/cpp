// If we do any arthimetic operation to the pointer it just simply change its pointing 
#include<iostream>
using namespace std;
int main() {
    int a[5]={12,54,89,45,60};
    int* p = a;
 
 cout<< *p << endl;
 p++; //here now pointer is pointing to second element of array
 cout<< *p<< endl;
 cout << *(p+2);
 cout<<endl<<*p<<endl;
 cout<<a[0];
 cout<<endl<<sizeof(a);
 cout<<a<<endl;
 cout<<&a + 1;
return 0;
}