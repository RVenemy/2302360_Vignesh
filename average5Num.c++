#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,num4,num5;
    double average,n=5;
    cout<<"Enter number 1 ";cin>>num1;
    cout<<"\nEnter number 2 ";cin>>num2;
    cout<<"\nEnter number 3 ";cin>>num3;
    cout<<"\nEnter number 4 ";cin>>num4;
    cout<<"\nEnter number 5 ";cin>>num5;
    average=(num1+num2+num3+num4+num5)/n;
    cout<<"\n average of the number is "<<average;
    return 0;
}