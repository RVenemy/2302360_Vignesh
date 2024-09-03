#include<iostream>
using namespace std;

int area(int height,int breath);

int main(){
    int height,breath=1;
    char YN;
    cout<<"Enter value for height ";cin>>height;
    cout<<"do you want to change breath value?(by default its 1)(Y/N) ";cin>>YN;
    if(YN=='Y'|| YN=='y'){
        cout<<"Enter value for breath ";cin>>breath;
    }else
    if(YN=='N'|| YN=='n'){
        cout<<"by default the value is 1";
    }else{
        cout<<"INVALID OPTION"<<endl;
    }

    cout<<"\nArea= "<<area(height,breath);
    return 0;
}

int area(int height,int breath=1){
    int area=height*breath;
    return area;
}