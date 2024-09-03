#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Value For A = ";cin>>a;
    cout<<"Enter Value For B = ";cin>>b;
    c=a;a=b;b=c;
    cout<<"A = "<<a;
    cout<<"\nB = "<<b;
    return 0;
}