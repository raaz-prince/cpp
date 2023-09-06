//abstract class is the class whis has pure virtual function

#include<iostream>
using namespace std;

//abstract class
class car {
public:
virtual void start()=0;
virtual void stop()=0;
};

class inova : public car {
public:
void start() {
    cout<<"innova started"<<endl;
}
void stop() {
    cout<<"innova stopped"<<endl;
}
};

class swift : public car {
public:
void start() {
    cout<<"swift started"<<endl;
}
void stop() {
    cout<<"swift stopped"<<endl;
} 
};

int main() {
    car *c=new inova();
    c->start();
    c->stop();
    c=new swift(); 
    c->start();
    c->stop();
return 0;
}