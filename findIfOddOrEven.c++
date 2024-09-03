#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter a Number ";cin>>num;
    if(num%2==1){
        cout<<"\nEntered Number is Odd";
    }else{
        cout<<"\nEntered Number is Even";
    }
    return 0;
}