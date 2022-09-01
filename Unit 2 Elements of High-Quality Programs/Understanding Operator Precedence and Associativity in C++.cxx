// This program calculates profits and sales prices for a furniture company. 

#include <iostream>
#include <string>
using namespace std;
int main()
{
   string itemName = "TV Stand";
   double retailPrice = 325.00;
   double wholesalePrice = 200.00;
   double salePrice = retailPrice - (retailPrice * 25) / 100;
   double profit = retailPrice - wholesalePrice;
   double saleProfit = salePrice - wholesalePrice;
   // Write your assignment statements here
   cout << "Item Name: " << itemName << endl;
   cout << "Retail Price: $" << retailPrice << endl;
   cout << "Wholesale Price: $" << wholesalePrice << endl;
   cout << "Profit: $" << profit << endl;	
   cout << "Sale Price: $" << salePrice << endl;
   cout << "Sale Profit: $" << saleProfit << endl;
   return 0;
}
