#include<iostream>
using namespace std;
int main() {
    int day;
    cout<<"Enter day number :- ";
    cin>>day;
    if(day>=1 && day <=7) {
    if(day==1)
    cout<<"monday";
    else if(day==2)
    cout<<"tuesday";
    else if(day==3)
    cout<<"wednesday";
    else if(day==4)
    cout<<"thursday";
    else if(day==5)
    cout<<"friday";
    else if(day==6)
    cout<<"saturday";
    else
    cout<<"sunday";   }
    else 
    cout<<"invalid day";
return 0;
}
