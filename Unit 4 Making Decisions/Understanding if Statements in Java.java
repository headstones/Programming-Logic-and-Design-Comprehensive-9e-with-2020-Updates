// HouseSign.java - This program calculates prices for custom house signs.


public class HouseSign 
{
	public static void main(String args[])
	{
		// This is the work done in the housekeeping() method
		// Declare and initialize variables here.
			 // Charge for this sign.
			 // Number of characters.
			 // Color of characters.
			 // Type of wood.
		int charge = 0;
        int numChars = 8;
        String color = "gold";
        String woodType = "oak";
        
		// This is the work done in the detailLoop() method
		// Write assignment and if statements here as appropriate.
        if (numChars > 5)
        {charge = charge + ((numChars - 5) * 4);}
        if (woodType.equals("oak"))
        {charge = charge + 20;}
        if (color.equals("gold"))
        {charge = charge + 15;}
        charge = charge + 35;

		// This is the work done in the endOfJob() method	
		// Output Charge for this sign.
		System.out.println("The charge for this sign is $" + charge);
		System.exit(0); 
	}
} 	
