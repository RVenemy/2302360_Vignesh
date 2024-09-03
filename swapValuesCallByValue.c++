#include<iostream>
using namespace std;

void swap(int a,int b);

int main(){
    int a,b;
    cout<<"Enter Value For A = ";cin>>a;
    cout<<"Enter Value For B = ";cin>>b;
    swap(a,b);
    return 0;
}

void swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"A = "<<a<<" B = "<<b;
}