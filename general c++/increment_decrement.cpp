//++i -pre increment  i++ called post increment
#include<iostream>
using namespace std;
int main() {
    int a=5,j,k;
    j=a++;//post increment (first assign the value then increment takes place)
    cout<<j<<endl;
    k=++a; //pre increment (first increases by one then assign the value)
    cout<<k;
return 0;
}