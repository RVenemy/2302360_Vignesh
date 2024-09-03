#include<iostream>
using namespace std;

class color{
    string name;
    float price;

    public:

    void printColor(){
        cout<<"\nEnter the name of the color: ";cin>>name;
        cout<<"\nEnter the prize of the color: ";cin>>price;
    }

    void displayColor(){
        cout<<"\nThe name of the color is: "<<name;
        cout<<"\nThe prize of the color is: "<<price<<endl;
    }
};

int main(){
    
    int volume=2;
    color info[volume];

    for ( int i=0; i < volume; i++)
    {
        info[i].printColor();
    }

    cout<<"\n\n";
    
        for ( int i=0; i < volume; i++)
    {
        info[i].displayColor();
    }
}