#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter your Favourite Number in between 1-5 ";cin>>num;

    switch (num)
    {
    case 1:
        cout<<"\nEnter Favourite Number is 1";
        break;
    case 2:
        cout<<"\nEnter Favourite Number is 2";
        break;
    case 3:
        cout<<"\nEnter Favourite Number is 3";
        break;
    case 4:
        cout<<"\nEnter Favourite Number is 4";
        break;
    case 5:
        cout<<"\nEnter Favourite Number is 5";
        break;
    default:
        cout<<"\nInvalid Input";
        break;
    }
    return 0;
}