"""
HouseSign.py - This program calculates prices for custom house signs.
"""

# Declare and initialize variables here.
    # Charge for this sign.
    # Number of characters.
    # Color of characters.
    # Type of wood.
charge = 0.0
numChars = 8
color = "gold"
woodType = "oak"
# Write assignment and if statements here as appropriate.
charge = 35.0
if numChars > 5:
    charge += (numChars - 5) * 4
if woodType == "oak":
    charge += 20.0
if color == "gold":
    charge += 15.0
print("The charge for this sign is ${0:0.2f}".format(charge))
# Output Charge for this sign.
print("The charge for this sign is $" + str(charge))
