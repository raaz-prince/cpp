#include<iostream>
using namespace std;
int main() {
    int x=10;
    int &y=x;  //reference 
  cout<<x<<endl;  //10
  x++;
  cout<<x<<endl;  //11
  y++;
  cout<<x<<endl;  //12
  y=500;
  cout<<x;   //500
return 0;
}