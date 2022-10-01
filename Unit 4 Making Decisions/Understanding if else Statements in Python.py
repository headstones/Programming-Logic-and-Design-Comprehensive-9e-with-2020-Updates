# LargeSmall.py - This program calculates the largest and smallest of three integer values. 
# Declare and initialize variables here
largest = None
smallest = None

# Prompt the user to enter 3 integer values
num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))
num3 = int(input("Enter the third integer: "))
# Write assignments, and necessary if else statements here as appropriate
if num1 > num2:
    if num1 > num3:
        largest = num1
    else:
        largest = num3
else:
    if num2 > num3:
        largest = num2
    else:
        largest = num3
if num1 < num2:
    if num1 < num3:
        smallest = num1
    else:
        smallest = num3
else:
    if num2 < num3:
        smallest = num2
    else:
        smallest = num3
# Output largest and smallest number. 
print("The largest value is " + str(largest))
print("The smallest value is " + str(smallest))
