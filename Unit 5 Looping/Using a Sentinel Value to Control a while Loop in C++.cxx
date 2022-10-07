// MovieGuide.cpp - This program allows each theater patron to enter a value from 0 to 4 
// indicating the number of stars that the patron awards to the Guide's featured movie of the 
// week. The program executes continuously until the theater manager enters a negative number to 
// quit. At the end of the program, the average star rating for the movie is displayed.  

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double numStars,averageStars,totalStars=0;
    int numPatrons = 0;
    cout << "Enter rating for featured movie: ";
    cin >> numStars;
    while(numStars >= 0 && numStars<=4)
    {
        numPatrons++;
        totalStars += numStars;
        cout << "Enter rating for featured movie: ";
        cin >> numStars;
        }
        if(numPatrons == 0)
        averageStars = 0;
        else
        averageStars = totalStars/numPatrons;
        cout << "Average Star Value: " << averageStars << endl;
        return 0;
}
