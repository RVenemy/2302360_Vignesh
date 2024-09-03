#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"\nEnter value For 1st Number ";cin>>a;
    cout<<"\nEnter value For 2nd Number ";cin>>b;

    if(a>b){
        cout<<"\n\n1st number is Greatest";
    }else if (a=b)
    {
        cout<<"\n\n Both numbers are Equal";
    }
    else
    {
        cout<<"\n\n2nd number is Greatest";
    }
}