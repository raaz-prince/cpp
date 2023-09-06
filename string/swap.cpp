#include<iostream>
#include<string>
using namespace std;
int main() {
    string s1="prince",s2="kumar";
    cout<<"s1 "<<s1<<endl<<"s2 "<<s2;
    cout<<endl;
    s1.swap(s2);
    cout<<"s1 "<<s1<<endl<<"s2 "<<s2;
return 0;
}