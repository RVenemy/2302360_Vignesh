// Programon on Inheritance 2

// 1 Create a class call Employee
// 2 The class Employee has three variables
//    employeId,employeName and employeAddress   and
//    methode display employee info

// 3 There is a class called permanentEmployee which has four variables
//    basicPay,Da,hra,ta and
//    a methode to compute the salary
// 4 There is also a methode to display the salary
// 5 permant employe is the child class and employee is the parent class

// 6 consider the above employee class and add a manager class to it
// 7 the manager class has the variables advance salary and vehical to pic him up
// and methodes to print the advance pay and vehicals , 
// manager class is the childe class and parmenant employee is the parent class 

#include <iostream>
using namespace std;

class employee
{
   public:
   int employeeId = 0;
   string employeeName = "", employeeAddress = "";

   void disInfo()
   {
      cout << "Name: " << employeeName << endl;
      cout << "Id: " << employeeId << endl;
      cout << "Address: " << employeeAddress << endl;
   }
};

class permanentEmployee : public employee
{
   public:
   float basicPay,da,hra,ta;

   float calSal()
   {
      if (basicPay < 10001)
      {
         hra = (basicPay*20)/100;
         da = (basicPay*80)/100;
      }else
      if (basicPay > 10000 && basicPay < 2001)
      {
         hra = (basicPay*25)/100;
         da = (basicPay*90)/100;
      }else
      if (basicPay > 20000)
      {
         hra = (basicPay*30)/100;
         da = (basicPay*95)/100;
      }

      ta=basicPay+hra+da;
      return ta;
   }

   void disSal(){
      cout<<"Gross Salary is "<<calSal()<<endl;
   }
};

class manager : public permanentEmployee {
   public:
    float advanceSalary=0;
    string vehicle="";
    
    void advSal(){
      cout<<"Advance salary is "<<advanceSalary;
      cout<<"alloted Vehicle is "<<vehicle;
    }
};

int main(){
   manager e1; //e1:employee 1

   cout<<"\nEnter Name of the Employee ";cin>>e1.employeeName;
   cout<<"\nEnter Id of the Employee ";cin>>e1.employeeId;
   cout<<"\nEnter Address of the Employee ";cin>>e1.employeeAddress;
   cout<<"\nEnter Basic Salary of the Employee ";cin>>e1.basicPay;
   cout<<"\nEnter advance Salary of the Employee ";cin>>e1.advanceSalary;
   cout<<"\nEnter vehicle of the Employee ";cin>>e1.vehicle;
   e1.disInfo();
   e1.disSal();
   e1.advSal();
}