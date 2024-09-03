// sqrt
// round
// log 
// max 
// min 
// abs absulute
// ceil
// floor 
// pow

#include<iostream>
using namespace std;
#include<cmath>

int main(){
    float num1,num2;

    cout<<"\n\nUser please input value for number 1 ";cin>>num1;
    cout<<"\nUser please input value for number 2 ";cin>>num2;

    cout<<"\n\nSquare root of number 1 is "<<sqrt(num1);
    cout<<"\nSquare root of number 2 is "<<sqrt(num2);

    cout<<"\n\nRounded Value of number 1 is "<<round(num1);
    cout<<"\nRounded Value of number 2 is "<<round(num2);

    cout<<"\n\nLogarithmic Value of number 1 is "<<log(num1);
    cout<<"\nLogarithmic Value of number 2 is "<<log(num2);

    cout<<"\n\nAmong two numbers bigest number is "<<max(num1,num2);

    cout<<"\n\nAmong two numbers smallest number is "<<min(num1,num2);

    cout<<"\n\nAbsolute Value of number 1 is "<<abs(num1);
    cout<<"\nAbsolute Value of number 2 is "<<abs(num2);

    cout<<"\n\nCiel Value of number 1 is "<<ceil(num1); 
    cout<<"\nCiel Value of number 2 is "<<ceil(num2); 

    cout<<"\n\nFloor Value of number 1 is "<<floor(num1);
    cout<<"\nFloor Value of number 2 is "<<floor(num2);

    cout<<"\n\nPower of number 1 is "<<pow(num1,2);
    cout<<"\nPower of number 2 is "<<pow(num2,2);
}