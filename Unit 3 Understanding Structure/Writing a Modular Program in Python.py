# Program Name: BadDate.py 
# Function:     This program determines if a date entered by the user is valid.  
# Input:        Interactive
# Output:       Valid date is printed or user is alerted that an invalid date was entered.

validDate = True
MIN_YEAR = 0
MIN_MONTH = 1
MAX_MONTH = 12
MIN_DAY = 1
MAX_DAY = 31

year = None
month = None
day = None

# Get the year, then the month, then the day
# housekeeping()
year = int(input("Enter the year: "))
month = int(input("Enter the month: "))
day = int(input("Enter the day: "))
# Check to be sure date is valid
if year < MIN_YEAR:
    validDate = False
if month < MIN_MONTH or month > MAX_MONTH:
    validDate = False
if day < MIN_DAY or day > MAX_DAY:
    validDate = False
# Print the date if it is valid, otherwise print an error message
if validDate:
    print(f"{month}/{day}/{year} is a valid date.")
else:
    print(f"{month}/{day}/{year} is an invalid date.")
