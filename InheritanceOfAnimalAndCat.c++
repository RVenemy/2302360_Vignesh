#include <iostream>
using namespace std;

class Animal
{
    protected:
        void IamAnimal()
        {
            cout << "Iam Animal";
        }
};

class Cat : public Animal
{

    public:
        void IamCat()
        {
            cout << "Iam Cat";
        }

        void showAnimal()
        {
            IamAnimal(); // This is necessary protected directly cant acsess by main
        }
};

int main()
{
    Cat mewo;
    mewo.showAnimal();
    cout << " And ";
    mewo.IamCat();
    return 0;
}