#include<iostream>
using namespace std;
int main() {
    cout<<"Menu \n";
    cout<<"1. add \n" <<"2. subract \n" << "3. multiply \n" << "4. div\n";
    int option;
    cout<<"Enter your choice :- ";
    cin>>option;
    int a,b,c;
    cout<<"Enter two numbers:- ";
    cin>>a >> b;
    switch (option) 
    {
        case 1: 
         c=a+b;
         break;
         case 2:
         c=a-b;
         break;
         case 3:
         c=a*b;
         break;
         case 4:
         c=a/b;
         break;

    }
    cout<<c;
return 0;
}