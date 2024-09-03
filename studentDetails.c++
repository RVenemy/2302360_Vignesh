#include<iostream>
using namespace std;

int main(){
    int rollno,age;
    string name,sName,place;
    cout<<"Enter your Name ";cin>>name;
    cout<<"Enter your Surname ";cin>>sName;
    cout<<"Enter your Rollno ";cin>>rollno;
    cout<<"Enter your Age ";cin>>age;
    cout<<"Enter your Address ";cin>>place;

    cout<<"\n\nStudent Details";
    cout<<"\nStudent Name    -"<<name;
    cout<<" "<<sName;
    cout<<"\nStudent Roll No -"<<rollno;
    cout<<"\nStudent Age     -"<<age;
    cout<<"\nStudent Address -"<<place;
    return 0;
}