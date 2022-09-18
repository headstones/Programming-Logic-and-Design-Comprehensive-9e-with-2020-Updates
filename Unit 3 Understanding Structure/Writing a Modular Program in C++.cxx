/* Program Name: BadDate.cpp 
   Function: This program determines if a date entered by the user is valid.  
   Input:  Interactive
   Output: Valid date is printed or user is alerted that an invalid date was entered
*/  

#include <iostream>
bool validateDate(int, int, int);
using namespace std;
int main()
{ 
  // Declare variables
     
  int year;
  int month;
  int day;
  const int MIN_YEAR = 0, MIN_MONTH = 1, MAX_MONTH = 12, MIN_DAY = 1, MAX_DAY = 31; 
  bool validDate = true;
     
  // This is the work of the housekeeping() method
  // Get the year, then the month, then the day
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the day: ";
    cin >> day;
  // This is the work of the detailLoop() method
  // Check to be sure date is valid

  if(year <= MIN_YEAR)  // invalid year
     validDate = false;
  else if (month < MIN_MONTH || month > MAX_MONTH)  // invalid month
     validDate = false;
  else if (day < MIN_DAY || day > MAX_DAY) // invalid day
     validDate = false; 

  // This is the work of the endOfJob() method
  // test to see if date is valid and output date and whether it is valid or not
  if(validDate == true)
  { 
     // Output statement
        cout << month << "/" << day << "/" << year << " is a valid date." << endl;
  }
  else
  {
     // Output statement
        cout << month << "/" << day << "/" << year << " is an invalid date." << endl;
  }
     
} // end of main() function