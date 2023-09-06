//In c++ the scope of the visibility of variable is limited only to the block where it is declared
#include<iostream>
using namespace std;
int main() {
    int a=10,b=5;
    if(true) {
        int c=a+b; // this c variable is limited to this block only 
        cout<<c;
    }
   // cout<<c;   (here we can't use c bcz it is not declared in main scope)
   if(int k=a+b;k>10) // this can't use in c language
   cout<<endl<<k;
return 0;
}