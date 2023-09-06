#include<iostream>
using namespace std;

template<class T>
class stack {
private:
T *stk;
 int size;
 int top;
public:
stack(int sz) {
    size=sz;
    stk=new T[size];
    top=-1;
}

void push(T x);
T pop();
void display();
};

template<class T>
void stack<T>::push(T x) {
    if(top==size-1)
    cout<<"the stack is full"<<endl;
    else {
        top++;
        stk[top]=x;
    }
}

template<class T>
T stack<T> :: pop() {
    T a=0;
    if(top==-1)
    cout<<"the stack is empty"<<endl;
    else {
        a=stk[top];
        top--;
    }
return a;      
}

template<class T>
void stack<T> :: display() {
    int i=0;
    for(i=0;i<=top;i++)
    cout<<stk[i]<<" ";
}

int main() {
  stack<int> a(5);
  a.push(10); a.push(15);  a.push(85);
  a.display();
a.pop();
cout<<endl;
a.display();
return 0;
}