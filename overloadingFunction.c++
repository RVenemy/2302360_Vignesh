#include<iostream>
using namespace std;
#include<cmath>
#define pi 3.14159

int area(int a);
float area(float a);
double area(double a);
int area(int h,int b);
float area(float h,float b);
double area(double r,double h);
double area(double r,double h,bool IsCone);

int main(){
    // a=side b=base h=height r=radius

    int side,height,breath;

    float a,b,h;

    double radius,l_height;
     
    char what;
    cout<<"What area you want to find?"<<endl;
    cout<<"For Square press S"<<endl;
    cout<<"For Cube press c"<<endl;
    cout<<"For Circle press C"<<endl;
    cout<<"For Rectangle press R"<<endl;
    cout<<"For Triangle press T"<<endl;
    cout<<"For Cylinder press I"<<endl;
    cout<<"For Cone press O"<<endl;
    cin>>what;

     switch (what)
    {
    case 'S':
        cout<<"Enter value of a side ";cin>>side;
        cout<<area(side);
        break;
    case 'c':
        cout<<"Enter value of a side ";cin>>a;
        cout<<area(a);
        break;
    case 'C':
        cout<<"Enter value of a Radius ";cin>>radius;
        cout<<area(radius);
        break;
    case 'R':
        cout<<"Enter value of a Height "<<endl;cin>>height;
        cout<<"Enter value of a Breath "<<endl;cin>>breath;
        cout<<area(height,breath);
        break;
    case 'T':
        cout<<"Enter value of a Base "<<endl;cin>>b;
        cout<<"Enter value of a Height "<<endl;cin>>h;
        cout<<area(h,b);
        break;
    case 'I':
        cout<<"Enter value of a Radius "<<endl;cin>>radius;
        cout<<"Enter value of a Height "<<endl;cin>>l_height;
        cout<<area(radius,l_height);
        break;
    case 'O':
        cout<<"Enter value of a Radius "<<endl;cin>>radius;
        cout<<"Enter value of a Height "<<endl;cin>>l_height;
        cout<<area(radius,l_height,true);
        break;
    default:
        cout<<"invalid Input";
        break;
    }
}

int area(int a){
    int area=(pow(a,2));
    return area;
}
float area(float a){
    float area=(pow(a,3));
    return area;
}
double area(double a){
    double area=pi*(pow(a,2));
    return area;
}
int area(int h,int b){
    int area=b*h;
    return area;
}
float area(float h,float b){
    float area=(0.5)*b*h;
    return area;
}
double area(double r,double h){
    double area=(2*pi*r*(r + h));
    return area;
}
double area(double r,double h,bool IsCone){
    double l=sqrt((pow(r,2))+(pow(h,2))),area=((pi*r*l)+(pi*(pow(r,2))));
    return area;
}