#include<iostream>
using namespace std;

template <class T>
class stack {
    private:
     T s[10];
     int top=-1;
    public:
     void push(T x);
     T pop();
};

template<class T>
void stack<T> :: push(T x) {
    if(top==9)
    cout<<"stack is full "<<endl;
    else {
    top=top+1;
    s[top]=x;
 }
}

template<class T>
T stack<T> :: pop() {
    T a=0;
    if(top==-1)
    cout<<"stack is empty "<<endl;
    else {
     a=s[top];
    top=top-1;
 }
 return a;
}

int main() {
    stack<int> s;
    s.push(10);
   cout<< s.pop()<<endl;
return 0;
}