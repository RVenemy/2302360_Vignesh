#include<iostream>
using namespace std;

int swap(int *a,int *b);
int main(){
    int a,b;
    cout<<"Enter Value For A = ";cin>>a;
    cout<<"Enter Value For B = ";cin>>b;
    swap(&a,&b);
    cout<<"A = "<<a<<" B = "<<b;
    return 0;
}
int swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
    return 0;
}
















// #include<iostream>
// using namespace std;

// int swap(int *a,int *b);
// int main(){
//     int a,b;
//     cout<<"Enter Value For A = ";cin>>a;
//     cout<<"Enter Value For B = ";cin>>b;
//     swap(&a,&b);
//     cout<<"A = "<<a<<" B = "<<b;
//     return 0;
// }
// int swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
//     return 0;
// }