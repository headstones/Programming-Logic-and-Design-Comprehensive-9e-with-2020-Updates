// LetterE.cpp - This program prints the letter E with 3 asterisks
// across and 5 asterisks down. 
// Input:  None
// Output: Prints the outline of the letter E. 

#include <iostream>
#include <string>
using namespace std;
int main()
{								
   const int NUM_ACROSS = 3; 	// Number of asterisks to print across
   const int NUM_DOWN = 5;	// Number of asterisks to print down
   int row;	// Loop control for row number
   int column;	// Loop control for column number

   // This is the work done in the detailLoop() function
   // Write a loop to control the number of rows.
    for (row = 1; row <= NUM_DOWN; row++)
    {
         // Write a loop to control the number of columns.
         for (column = 1; column <= NUM_ACROSS; column++)
         {
              // Write an if statement to print an asterisk if the row is 1 or 5.
              if (row == 1 || row ==3 || row == NUM_DOWN)
              {
                cout << "*";
              }
              // Write an else if statement to print an asterisk if the column is 1.
              else if (column == 1)
              {
                cout << "*";
              }
              // Write an else statement to print a space.
              else
              {
                cout << " ";
              }
         }
         // Write a statement to print a newline.
         cout << endl;
    }
   // This is the work done in the endOfJob() function
   return 0; 
} // End of main()
