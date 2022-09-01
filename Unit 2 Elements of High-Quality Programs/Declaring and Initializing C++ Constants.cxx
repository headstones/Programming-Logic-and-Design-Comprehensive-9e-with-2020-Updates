// This program calculates your age in the year 2050.
// Input:  None
// Output: Your current age followed by your age in 2050
#include <iostream>
using namespace std;
int main()
{
   const int YEAR = 2050;
   int myCurrentAge = 29;
   int myNewAge;
   myNewAge = myCurrentAge + (2050 - YEAR);
   cout << "My Current Age is " << myCurrentAge << endl;
   cout << "I will be " << myNewAge << " in " << YEAR << endl;
   return 0;
}
