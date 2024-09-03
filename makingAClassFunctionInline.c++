// 5. Making a class function inline

#include<iostream>
using namespace std;

class calculate{
    public:

    inline int sum(int num1,int num2){
        return num1+num2;
    }

    inline int product(int num1,int num2){
        return num1*num2;
    }

};

int main(){
    calculate values;

    int num1,num2;
    cout<<"Enter the num1 ";cin>>num1;
    cout<<"\nEnter the num2 ";cin>>num2;

    cout<<"\nsum using inline function is "<<values.sum(num1,num2);
    cout<<"\nproduct using inline function is "<<values.product(num1,num2);
    return 0;
}