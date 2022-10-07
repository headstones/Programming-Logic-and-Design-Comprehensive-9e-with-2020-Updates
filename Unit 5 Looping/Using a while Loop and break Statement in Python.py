"""
NewestMultiply.py - This program prints the numbers 0 through 10 along with
                     these values multiplied by 2 and by 10.
Input:  None.
Output: Prints the numbers 0 through 10 along with their values multiplied by
        2 and by 10.
"""
head1 = "Number: "
head2 = "Multiplied by 2: "
head3 = "Multiplied by 10:  "
NUM_LOOPS = 10  # Constant used to control loop.

print("0 through 10 multiplied by 2 and by 10" + "\n")

# Write while loop
number = 0
while number <= NUM_LOOPS:
    print(head1 + str(number) + "\t" + head2 + str(number * 2) + "\t" + head3 + str(number * 10))
    number += 1