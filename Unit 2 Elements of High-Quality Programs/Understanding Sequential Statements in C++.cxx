// This program calculates an employee's take home pay. 
#include <iostream>
using namespace std;
int main()
{
   double salary = 1250.00;
   double stateTax = 0.065 * salary;
   double federalTax= 0.28 * salary;
   double numDependents = 2;
   double dependentDeduction= 0.025 * salary * numDependents;
   double totalWithholding= stateTax+federalTax+dependentDeduction;
   double takeHomePay= salary-totalWithholding;
   // Calculate state tax here
   cout << "State Tax: $" << stateTax << endl;
   // Calculate federal tax here
   cout << "Federal Tax: $" << federalTax << endl;
   // Calculate dependent deduction here
   cout << "Dependents: $" << dependentDeduction << endl;
   // Calculate total withholding here
   // Calculate take-home pay here
   cout << "Salary: $" << salary << endl;
   cout << "Take-Home Pay: $" << takeHomePay << endl;
   return 0;
}
