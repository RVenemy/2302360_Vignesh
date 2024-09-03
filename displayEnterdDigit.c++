#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your Number in between 1-5 ";cin>>num;
    cout<<"Entered number in words is ";
    switch (num)
    {
    case 1:
        cout<<"\nOne";
        break;
    case 2:
        cout<<"\nTwo";
        break;
    case 3:
        cout<<"\nThree";
        break;
    case 4:
        cout<<"\nFour";
        break;
    case 5:
        cout<<"\nFive";
        break;
    default:
        cout<<"\nInvalid Input";
        break;
    }
    return 0;
}