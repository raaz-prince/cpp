//find substring in main string
#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char main[]="programming";
    char sub[]="gram";
    char tu[]="kite";
    cout<<strstr(main,sub)<<endl;
    if(strstr(main,tu) != NULL)
    cout<<strstr(main,tu);
    else
    cout<<endl<<"Not Found";
return 0;
}