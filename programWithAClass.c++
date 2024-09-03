//2. Simple i/o program with a class, accessing class instance in main().

#include<iostream>
using namespace std;

class RGB{
    public:
    string name;
    float quantity,quality;
};

int main(){
    RGB color;//color is object

    cout<<"\nINPUT"<<endl;
    cout<<"\nName of the color ";cin>>color.name;
    cout<<"\nQuality of the color ";cin>>color.quality;
    cout<<"\nQuantity of the color (kg)";cin>>color.quantity;

    cout<<"\nOUTPUT"<<endl;
    cout<<"Name "<<color.name<<endl;
    cout<<"Quality "<<color.quality<<endl;
    cout<<"Quantity "<<color.quantity<<"kg"<<endl;
    return 0;
}
