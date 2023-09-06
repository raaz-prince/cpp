// compound conditonal operators <= (smaller than or equal to) , >= ( greater than or equal to)
#include<iostream>
using namespace std;
int main() {
    int age;
    cout<<"enter your age :- ";
    cin>>age;
    if(age>=0 && age<=11)
    cout<<"child";

    else if(age>=12 && age <= 50)
    cout<<"young";

    else
    cout << "old";

return 0;
}