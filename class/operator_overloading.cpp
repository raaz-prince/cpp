//some operators is defined for specific inbuilt data types and to define it for user defined data , we have to overload the operator called operator overloading
#include<iostream>
using namespace std;
class complex {
public:
int real,img;
complex(int r=0,int i=0) {
    real=r;
    img=i;
}
complex operator+ (complex x) {
    complex temp;
    temp.real=real + x.real;
    temp.img=img + x.img;
    return temp;
}

};
int main() {
    complex c1(3,5) ,c2(3,6);
    complex c3 =c1 + c2 ;
    cout<<"summation is "<<c3.real<<" + i"<<c3.img<<endl;
    
return 0;
}