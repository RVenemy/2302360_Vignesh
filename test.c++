// #include<iostream>
// using namespace std;

// int space();

// int main(){
//     for (int i = 1; i <=9 ; i++)
//     {
//         cout<<"YES";
//         for (int j = 1; j <= i; j++)
//         {
//            j==1?cout<<"":cout<<" ";
//         }
//         cout<<"YES";
//         cout<<"\n";
//     }
//     return 0;    
// }
#include <iostream>
using namespace std;

// Function declaration with default parameter for 'breath'
int area(int height, int breath = 1);

int main() {
    int height, breath = 1;  // Initialize breath with default value
    char YN;

    cout << "Enter value for height: ";
    cin >> height;

    cout << "Do you want to change breath value? (by default it's 1) (Y/N): ";
    cin >> YN;

    if (YN == 'Y' || YN == 'y') {
        cout << "Enter value for breath: ";
        cin >> breath;
    } else {
        cout << "By default, the value is 1." << endl;
    }

    // Calculate and display area
    cout << "\nHeight = " << height << ", Breath = " << breath << endl;
    cout << "Area = " << area(height, breath) << endl;

    return 0;
}

// Function definition with default parameter for 'breath'
int area(int height, int breath) {
    int area = height * breath;
    return area;
}

