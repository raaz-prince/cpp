#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int,string> m;
    m[1]="prince";
   // m[2]="kumar";
    m[3]="boss";
    m[2]="ram";
    m.insert(pair<int,string>(4,"prince"));
    m.insert(pair<int,string>(5,"kumar"));
  //insertion can be done in both ways.
    map<int,string>:: iterator itr,itr1;
    for(itr=m.begin(); itr != m.end();itr++)
    cout<<itr->first<<" "<<itr->second<<endl;
    //there is a find function used to find the key and value in map items
    itr1=m.find(2);
    cout<<"value found is :- "<<endl;
    cout<<itr1->first<<" "<<itr1->second<<endl;
return 0;
}