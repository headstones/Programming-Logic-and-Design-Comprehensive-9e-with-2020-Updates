// LargeSmall.cpp - This program calculates the largest and smallest of three integer values. 

#include <iostream>
using namespace std;
int main()
{
   // This is the work done in the housekeeping() function
   // Declare and initialize variables here
   int num1, num2, num3, largest, smallest;
   // Prompt the user to enter 3 integer values seperated by commas
   cout << "Enter 3 numbers: ";
   cin >> num1 >> num2 >> num3;
   if (num1 >= num2 && num1 >= num3) {largest = num1;}
   else if(num2 >= num1 && num2 >= num3) {largest = num2;}
   else {largest = num3;}
   if (num1 <= num2 && num1 <= num3) {smallest = num1;}
   else if(num2 <= num1 && num2 <= num3) {smallest = num2;}
   else {smallest = num3;}
   // This is the work done in the endOfJob() function
   // Output largest and smallest number. 
   cout << "The largest value is " << largest << endl;
   cout << "The smallest value is " << smallest << endl;
   return 0; 
}