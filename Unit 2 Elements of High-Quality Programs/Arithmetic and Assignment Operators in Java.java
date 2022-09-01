// This program calculates profits and sales prices for a furniture company. 

public class Furniture
{
	public static void main(String args[])
	{
		String itemName = "TV Stand";
		double retailPrice = 325.00;
		double wholesalePrice = 200.00;
		double salePrice;
		double profit;
		double saleProfit;
		// Write your assignment statements here.
        // profit is retail price minus wholesale price
        profit = retailPrice - wholesalePrice;
        // sale price is 25% percent deducted from retail price
        salePrice = retailPrice * 0.75;
        // sale profit is the sale price minus wholesale price
        saleProfit = salePrice - wholesalePrice;
		System.out.println("Item Name: " + itemName);
		System.out.println("Retail Price: $" + retailPrice);
		System.out.println("Wholesale Price: $" + wholesalePrice);
		System.out.println("Profit: $" + profit);	
		System.out.println("Sale Price: $" + salePrice);
		System.out.println("Sale Profit: $" + saleProfit);
		System.exit(0);
		System.exit(0);
	}
}
