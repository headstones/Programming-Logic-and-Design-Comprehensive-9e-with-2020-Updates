// LargeSmall.java - This program calculates the largest and smallest of three integer values. 
import java.util.Scanner;

public class LargeSmall 
{
	public static void main(String args[])
	{
		// This is the work done in the housekeeping() method
		// Declare and initialize variables here.
		int largest;		// Largest of the three values.
		int smallest;		// Smallest of the three values.
		
		// This is the work done in the detailLoop() method
		Scanner numbers = new Scanner(System.in);
		// Prompt the user to enter 3 integer values
        System.out.print("Enter the first integer value: ");
        int first = numbers.nextInt();
        System.out.print("Enter the second integer value: ");
        int second = numbers.nextInt();
        System.out.print("Enter the third integer value: ");
        int third = numbers.nextInt();
   		// Write assignments, and necessary if else statements here as appropriate		
        if (first > second && first > third)
        {largest = first;}
        else if (second > first && second > third)
        {largest = second;}
        else
        {largest = third;}
        if (first < second && first < third)
        {smallest = first;}
        else if (second < first && second < third)
        {smallest = second;}
        else
        {smallest = third;}
        
		// This is the work done in the endOfJob() method	
		// Output largest and smallest number. 
		System.out.println("The largest value is " + largest);
		System.out.println("The smallest value is " + smallest);
	}
} 	
