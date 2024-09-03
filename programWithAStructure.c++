//1. Revise simple program with a structure.

#include <iostream>
using namespace std;

int main(){
    struct{
        string name,clas;
        int rollno;
    }RGB;

    RGB.name="Vignesh";
    RGB.clas="SyBsc";
    RGB.rollno=2302360;

    cout<<RGB.name<<endl;
    cout<<RGB.clas<<endl;
    cout<<RGB.rollno<<endl;
    return 0;
}
