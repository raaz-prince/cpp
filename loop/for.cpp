#include<iostream>
using namespace std;
int main() {
    int a,j;
    string name;
    cout<<"May I know ur name :- ";
    getline(cin,name);
    cout<<"How many times you want to print your name :- ";
    cin>>a;
    for(j=0;j<a;j++) {
       cout<<j+1<<" "<<name <<endl;
    }
return 0;
}