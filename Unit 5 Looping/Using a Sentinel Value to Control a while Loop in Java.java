// MovieGuide.java - This program allows each theater patron to enter a value from 0 to 4 
// indicating the number of stars that the patron awards to the Guide's featured movie of the 
// week. The program executes continuously until the theater manager enters a negative number to 
// quit. At the end of the program, the average star rating for the movie is displayed.  

import java.util.Scanner;

public class MovieGuide 
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		// Declare and initialize variables.
		double numStars;         // star rating.
		String numStarsString; 	 // string version of star rating
		double averageStars;  	 // average star rating.
		double totalStars = 0; 	 // total of star ratings.
		int numPatrons = 0;      // keep track of number of patrons
			
	
		// This is the work done in the housekeeping() method
		// Write while loop here
        System.out.println("Enter a rating from 0 to 4 for the movie or a negative number to quit");
        numStarsString = s.nextLine();
        numStars = Double.parseDouble(numStarsString);
        while (numStars >= 0) {
            totalStars += numStars;
            numPatrons++;
            System.out.println("Enter a rating from 0 to 4 for the movie or a negative number to quit");
            numStarsString = s.nextLine();
            numStars = Double.parseDouble(numStarsString);
        }
        averageStars = totalStars / numPatrons;
		System.out.println("Average Star Value: " + averageStars); 
		
		System.exit(0);
	} // End of main() method.

} // End of MovieGuide class.

