#include<iostream>
using namespace std;
#include<cmath>

const double pi=3.14159;

float area(int r);

int main(){
    int radius;
    cout<<"Enter value for radius ";cin>>radius;

    cout<<"\nArea= "<<area(radius);
    return 0;
}

float area(int r){
    float area= pi*(pow(r,2));
    return area;
}