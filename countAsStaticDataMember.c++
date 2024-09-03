// 6. Display count as static data member to count instances of a class

#include <iostream>
using namespace std;

class person{
    private :
    string name;
};




// class person{
// private:
//     string name;

//     static int count;

// public:
//     person(string n) : name(n)
//     {
//         count++;
//     }
//     ~person()
//     {
//         count--;
//     }

//     static int getCount()
//     {
//         return count;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//     }
// };

// int person::count = 0;

// int main()
// {
//     cout << "initail count: " << person::getCount() << endl;

//     person p1("John");
//     person p2("Alice");
//     person p3("Bob");

//     cout << "count after creating 3 instances: " << person::getCount() << endl;

//     {
//         person p4("Eve");
//         cout << "count after creating one more object " << person::getCount() << endl;
//     }

//     cout << "count after a object is distroyed: " << person::getCount() << endl;

//     return 0;
// }