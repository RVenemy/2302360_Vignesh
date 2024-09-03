#include<iostream>
using namespace std;

int main(){
    float tempInFar,tempInCel;

    cout<<"Enter temprature in Fahrenheit ";cin>>tempInFar;
    tempInCel=(tempInFar - 32) * 5/9;
    cout<<"\nTemprature in celcius is "<<tempInCel;
}