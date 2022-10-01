// HouseSign.cpp - This program calculates prices for custom made signs.

#include <iostream>
#include <string>
using namespace std;
int main()
{
   // This is the work done in the housekeeping() function
   // Declare and initialize variables here
   	    // Charge for this sign
            // Color of characters in sign 
    	    // Number of characters in sign initialized to 8
            // Type of wood
   int charge = 0.00;
   int numChars = 8;
   string woodType = "oak";
   string color = "gold";
   
   // This is the work done in the detailLoop() function
   // Write assignment and if statements here
   if (numChars > 5) {charge = charge + (numChars - 5) * 4.00;}
   if (woodType == "oak") {charge = charge + 20.00;}
   if (color == "gold") {charge = charge + 15.00;}
   charge = charge + 35.00;
   // This is the work done in the endOfJob() function			
   // Output charge for this sign
   cout << "The charge for this sign is $" << charge << endl;
   return(0); 
} 	
