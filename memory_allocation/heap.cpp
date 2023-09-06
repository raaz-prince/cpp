// when we enter new it will allocated in heap . So we have to store the address of variable in a pointer to use the memory.
#include<iostream>
using namespace std;
int main() {
    int *p,i;
    p = new int[5];
   for(i=0;i<5;i++) {
    cout << "Enter no. :- ";
    cin >> p[i];
   }
   for(i=0;i<5;i++) {
    cout << p[i] << endl;
   }

   delete []p;
return 0;
}