#include<iostream>
using namespace std;

int inlineFunction(int num);

int main(){
    int num;
    cout<<"Enter a number to find its Cube ";cin>>num;
    cout<<"Cube of "<<num<<" is "<<inlineFunction(num);
}

int inlineFunction(int num){
    num=num*num*num;
    return num;
}