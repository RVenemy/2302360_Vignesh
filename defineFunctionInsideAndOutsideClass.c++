// #include<iostream>
// using namespace std;

// void Swap(float a,float b);

// class SWAP{
//     public:
//     float num1=0,num2=0; 
//     float swaP(float a,float b){
//         SWAP num;
//         num.num1=b;
//         num.num2=a;
//         return 0;
//     }
// };

// int main(){
//     SWAP num;
//     float a,b;
//     cout<<"\nValue of A ";cin>>a;
//     cout<<"\nValue of B ";cin>>b;
//     Swap(a,b);
//     cout<<"Value of a "<<num.num1<<endl;
//     cout<<"Value of b "<<num.num2<<endl;
//     return 0;
// }

// void Swap(float a,float b){
//     SWAP num;
//     num.swaP(a,b);
// }

#include <iostream>
using namespace std;

class SWAP {
public:
    float num1 = 0, num2 = 0; 

    // Method to swap values of num1 and num2 of the instance
    void swaP(float a, float b) {
        num1 = b;
        num2 = a;
    }
};

// Function that performs the swap
void Swap(float &a, float &b) {
    SWAP num;
    num.swaP(a, b);
    // The swap results are stored in num.num1 and num.num2, but we need to reflect them back
    // Here, we should be updating a and b, which are not directly updated in this design
    a = num.num1; // Update original variables
    b = num.num2; // Update original variables
}

int main() {
    SWAP num; // Not used but kept for consistency with your code structure
    float a, b;

    cout << "\nValue of A: ";
    cin >> a;
    cout << "\nValue of B: ";
    cin >> b;

    Swap(a, b); // Perform the swap

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}
