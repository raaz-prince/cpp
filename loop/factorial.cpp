#include<iostream>
using namespace std;
int main() {
    int i,factorial=1,n;
cout<<"enter the number whose factorial has to find :- ";
cin>>n;
for(i=1;i<=n;i++) {
    factorial*=i;
}
cout<<"factorial of "<<n<<" is "<< factorial;
return 0;
}