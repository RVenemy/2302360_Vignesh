#include<iostream>
using namespace std;
#include<cmath>
const double pi=3.14159;
const double half=0.5;

float squareArea(float a);
float rectangleArea(float a,float b);
float circleArea(float r);
float triangleArea(float b,float h);
float cylinderArea(float r,float h);
float coneArea(float r,float h);
float cubeArea(float a);

int main(){
    float a,b,h,r;
    char what;
    cout<<"What area you want to find?\n";
    cout<<"For Square press S\n";
    cout<<"For Rectangle press R\n";
    cout<<"For Circle press C\n";
    cout<<"For Triangle press T\n";
    cout<<"For Cylinder press c\n";
    cout<<"For Cone press o\n";
    cout<<"For Cube press u\n";
    cin>>what;

    switch (what)
    {
    case 'S':
        cout<<"Enter value of a side ";cin>>a;
        cout<<squareArea(a);
        break;
    case 'R':
        cout<<"Enter value of a height ";cin>>h;
        cout<<"Enter value of a breath ";cin>>b;
        cout<<rectangleArea(b,h);
        break;
    case 'C':
        cout<<"Enter value of a Radius ";cin>>r;
        cout<<circleArea(r);
        break;
    case 'T':
        cout<<"Enter value of a height ";cin>>h;
        cout<<"Enter value of a base ";cin>>b;
        cout<<triangleArea(b,h);
        break;
    case 'c':
        cout<<"Enter value of a height ";cin>>h;
        cout<<"Enter value of a radius ";cin>>r;
        cout<<cylinderArea(r,h);
        break;
    case 'o':
        cout<<"Enter value of a length ";cin>>h;
        cout<<"Enter value of a radius ";cin>>r;
        cout<<coneArea(r,h);
        break;
    case 'u':
        cout<<"Enter value of a side ";cin>>a;
        cout<<cubeArea(a);
        break;

    default:
        cout<<"invalid Input";
        break;
    }
}

float squareArea(float a){
    float area=(a*a);
    return area;
}
float rectangleArea(float b,float h){
    float area=(b*h);
    return area;
}
float circleArea(float r){
    float area=(pi*r*r);
    return area;
}
float triangleArea(float b,float h){
    float area=(half*b*h);
    return area;
}
float cylinderArea(float r,float h){
    float area=(2*pi*r*(h+r));
    return area;
}
float coneArea(float r,float h){
    float area=(pi*r*(r+h));
    return area;
}
float cubeArea(float a){
    float area=(a*a*a);
    return area;
}