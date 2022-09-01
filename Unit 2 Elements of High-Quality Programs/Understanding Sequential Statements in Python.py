# inputs for salary and numDependents
salary = float(input("Enter your annual salary: "))
numDependents = int(input("Enter the number of dependents: "))
# Calculate stateTax witholding at 6.5 percent
stateTax = salary * 0.065
print("State Tax: $" + str(stateTax))

# Calculate federalTax witholding at 28 percent
federalTax = salary * 0.28
print("Federal Tax: $" + str(federalTax))

# Calculate dependantDeduction at 2.5 percent of the employees salary for each dependent
dependentDeduction = salary * 0.025 * numDependents
print("Dependents: $" + str(dependentDeduction))

# Calculate totalWithholding here.
totalWithholding = stateTax + federalTax + dependentDeduction
# Calculate takeHomePay here.
takeHomePay = salary - totalWithholding
print("Salary: $" + str(salary))
print("Take Home Pay: $" + str(takeHomePay))
