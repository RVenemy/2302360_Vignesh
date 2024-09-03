#include<iostream>
using namespace std;

int main(){
    int fac,total=1;
    cout<<"Enter the number which to be Find factorial ";cin>>fac;
    cout<<"The Factorial are\n";
    
    for(int i=1;i<=fac;i++){
        total*=i;
    }
    cout<<total;
    return 0;
}