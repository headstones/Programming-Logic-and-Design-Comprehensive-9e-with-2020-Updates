# EmployeeBonus2.py - This program calculates an employee's yearly bonus. 

# Declare and initialize variables here
BONUS_1 = 0.25
BONUS_2 = 0.15
BONUS_3 = 0.1
NO_BONUS = 0

RATING_1 = 1
RATING_2 = 2
RATING_3 = 3

employeeFirstName = input("Enter employee's first name: ")
employeeLastName = input("Enter employee's last name: ")
employeeSalary = float(input("Enter the employee's yearly salary: "))
employeeRating = int(input("Enter employee's performance rating: "))

# Write your code here
if employeeRating == RATING_1:
    bonusRate = BONUS_1
elif employeeRating == RATING_2:
    bonusRate = BONUS_2
elif employeeRating == RATING_3:
    bonusRate = BONUS_3
else:
    bonusRate = NO_BONUS
bonus = employeeSalary * bonusRate
# Output bonus here
print("Employee Name: " + employeeFirstName + " " + employeeLastName)
print("Employee Bonus: $" + str(bonus))