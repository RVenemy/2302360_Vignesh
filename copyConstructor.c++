#include<iostream>
using namespace std;

class color{
    public:
    string name;
    float price; 

    color(){cout<<"This is a default constructor"<<endl;};
    color(string nam,float pric);
    color(color &i);
    void displayColor(){
        cout<<" "<<price<<" "<<name<<endl;
    }
};

color::color(string nam,float pric){
    name=nam;
    price=pric;
}

color::color(color &i){
    name=i.name;
    price=i.price;
}

int main(){
    color obj1("green",20);
    obj1.displayColor();
    color obj2(obj1);
    obj2.displayColor();
    color obj3;
}