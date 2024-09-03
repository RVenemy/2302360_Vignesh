#include<iostream> 
using namespace std;

int main(){
    int integer;
    float decimal;
    double longDecimal;
    char character;

    cout<<"\nValue of Integer in bytes is "<<sizeof(integer);cout<<" bytes\n";
    cout<<"\nValue of Float in bytes is "<<sizeof(decimal);cout<<" bytes\n";
    cout<<"\nValue of Double in bytes is "<<sizeof(longDecimal);cout<<" bytes\n";
    cout<<"\nValue of Character in bytes is "<<sizeof(character);cout<<" bytes\n\n";
    return 0;
}