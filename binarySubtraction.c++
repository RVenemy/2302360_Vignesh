#include<iostream>
using namespace std;

class complex{
    public:
    int real=0,imgnary=0;

    complex(int r=0,int i=0){
        real=r;
        imgnary=i;
    }

    complex operator-(complex &c){
        return complex(real-c.real,imgnary-c.imgnary);
    }
};

int main(){
    complex c1(1,5),c2(1,2);
    complex c3=c1-c2;
    cout<<"sum: "<< c3.real<<"+"<<c3.imgnary<<"i"<<endl;
}
