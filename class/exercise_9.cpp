//write  a  class for students 
#include<iostream>
#include<string>
using namespace std;
class Student {
 private:
 int roll;
 string name;
 int mathmarks;
 int phymarks;
 int chemmarks;
 public:
 Student (int r,string n,int m,int p,int c) {
  roll=r;
  name=n;
  mathmarks=m;
  phymarks=p;
  chemmarks=c;
 }
 int total() {
    return (mathmarks + phymarks + chemmarks);
 }
 char grade() {
    float average=total()/3;
    if(average>=60)
    return 'A';
    else if(average>=40 && average < 60)
    return 'B';
    else 
    return 'C';
 }
};
int main() {
    int roll,m,p,c;
    string name;
    cout<<"Enter roll  :- ";
    cin>>roll;
    fflush(stdin);
    cout<<"Enter name :- ";
    getline(cin,name);
    cout <<"Enter math marks ";
    cin>>m;
    cout<<"Enter physics marks ";
    cin>>p;
    cout<<"Enter chemistry marks ";
    cin>>c;
    Student s1(roll,name,m,p,c);
    cout<<"Total marks "<<s1.total()<<endl;
    cout<<"Your grade "<<s1.grade()<<endl;
return 0;
}