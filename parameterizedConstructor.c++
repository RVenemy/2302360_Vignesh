#include<iostream>
using namespace std;

class color{
    public:
    string name;
    float price,quality;

    color(){
        cout<<"This is a default constructor"<<endl;
    }

    color(string nam,float pric,float qualit){
        name=nam;
        price=pric;
        quality=qualit;
    }

    void displayColor(){
        cout<<" "<<price<<" "<<name<<" "<<quality<<endl;
    }
};

int main(){
    color one=color("green",20,10.00);
    one.displayColor();
    color two("red",10,9.9);
    two.displayColor();
    color three;
    color $4;
    color _5;

}