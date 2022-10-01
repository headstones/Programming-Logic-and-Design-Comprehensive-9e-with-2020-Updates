// Airline.cpp - This program determines if an airline passenger is 
// eligible for a 25% discount. 

#include <iostream>
#include <string>
using namespace std;
int main() 
{
   string passengerFirstName = ""; // Passenger's first name
   string passengerLastName = "";  // Passenger's last name
   int passengerAge = 0; 	   // Passenger's age

   // This is the work done in the housekeeping() function
   cout << "Enter passenger's first name: ";
   cin >> passengerFirstName;
   cout << "Enter passenger's last name: ";
   cin >> passengerLastName;
   cout << "Enter passenger's age: ";
   cin >> passengerAge;
	
   // This is the work done in the detailLoop() function 	
   // Test to see if this customer is eligible for a 25% discount
   //25 percent discount to passengers who are 6 years old or younger and the same discount to passengers who are 65 years old or older.
    if (passengerAge <= 6 || passengerAge >= 65) {cout << "Passenger " << passengerFirstName << " " << passengerLastName << " is eligible for a 25% discount." << endl;}
    else {cout << "Passenger " << passengerFirstName << " " << passengerLastName << " is not eligible for a 25% discount." << endl;}
   // This is the work done in the endOfJob() function
   return 0;
} 
