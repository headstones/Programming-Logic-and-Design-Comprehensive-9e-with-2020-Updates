// This program calculates an employee's take home pay. 
import java.util.Scanner;

public class Payroll
{
	public static void main(String args[])
	{
        Scanner s = new Scanner(System.in);
		double salary = 1250.00;
		double stateTax;
		double federalTax;
		double numDependents = 2;
		double dependentDeduction;
		double totalWithholding;
		double takeHomePay;
        // change the above code to take interactive input for salary and numDependants
        System.out.print("Enter salary: ");
        salary = s.nextDouble();
        System.out.print("Enter number of dependents: ");
        numDependents = s.nextDouble();
		// Calculate state tax here.
        // state witholding is 6.5 percent
        stateTax = salary * 0.065;
		System.out.println("State Tax: $" + stateTax);
		// Calculate federal tax here. 
        // federal withholding is 28.0 percent
        federalTax = salary * 0.28;
		System.out.println("Federal Tax: $" + federalTax);
		// Calculate dependant deduction here.
        // dependent deduction is 2.5 percent of employees salary for each dependent
        dependentDeduction = salary * 0.025 * numDependents;
		System.out.println("Dependents: $" + dependentDeduction);
		// Calculate total withholding here.
        // total withholding is state tax plus federal tax minus dependent deduction
        totalWithholding = stateTax + federalTax + dependentDeduction;
		// Calculate take home pay here.
        // take home pay is salary minus total withholding
        takeHomePay = salary - totalWithholding;
		System.out.println("Salary: $" + salary);
		System.out.println("Take-Home Pay: $" + takeHomePay);
		System.exit(0);
	}
}
