// NewMultiply.cpp - This program prints the numbers 0 through 10 along
// with these values multiplied by 2 and by 10.
// Input:  None
// Output: Prints the numbers 0 through 10 along with their values multiplied by 2 and by 10. 


#include <iostream>
#include <string>
using namespace std;

int main()
{
		
   string head1 = "Number: ";
   string head2 = "Multiplied by 2: ";
   string head3 = "Multiplied by 10: ";				
   int numberCounter; 	        // Numbers 0 through 10
   int byTen;		        // Stores the number multiplied by 10
   int byTwo; 		        // Stores the number multiplied by 2
   const int NUM_LOOPS = 10;    // Constant used to control loop

   // This is the work done in the housekeeping() function
   cout << "0 through 10 multiplied by 2 and by 10." << endl;
		
   // This is the work done in the detailLoop() function
   // Write your for loop here.
    for (numberCounter = 0; numberCounter <= NUM_LOOPS; numberCounter++)
    {
         byTwo = numberCounter * 2;
         byTen = numberCounter * 10;
         cout << head1 << numberCounter << "\t" << head2 << byTwo << "\t" << head3 << byTen << endl;
    }

   // This is the work done in the endOfJob() function
   return 0;
} // End of main() 