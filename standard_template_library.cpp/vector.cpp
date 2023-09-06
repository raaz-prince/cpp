#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(6);
    v.push_back(6);
    v.push_back(6);
    v.push_back(6);
    v.push_back(65);
    vector<int> :: iterator itr;
    for(itr=v.begin();itr != v.end();itr++)
    cout<<*itr<<endl;
    cout<<*(v.end()-1);  //end() last after the list end
return 0;
}