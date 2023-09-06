#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char s1[]="good";
    char s2[]="morning";
    cout<<"length of s1 is "<<strlen(s1)<<endl;
    cout<<"length of s2 is "<<strlen(s2)<<endl;
    cout<<"string concantenate: "<<strcat(s1,s2)<<endl;
    strcpy(s1,s2);
    cout<<"string copy : "<<s1<< endl;
return 0;
}