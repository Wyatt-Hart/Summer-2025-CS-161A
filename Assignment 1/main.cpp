// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 1
// Date:        June 29, 2025
// Description: This program will read the employee ID, number of hours worked, hourly rate and federal witholding rate
// and calculate the total gross pay, federal tax withholding and net pay.
// Sources: Assignment 1 specifications


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         1
// Participation:   100%
// Challenge:       100%
// Labs:            100%


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count: 1
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT [yes/no]: yes
// B. OUTPUT [yes/no]: yes
// C. CALCULATIONS [yes/no]: yes
// D. LOGIC and ALGORITHMS [yes/no]: yes
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS [yes/no]: yes
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

int main() {
    int employeeID;
    int hoursWorked;
    int hourlyRate;
    int fedWithholdingRate;

    int totalGrossPay;
    int fedTaxWithholding;
    int totalNetPay;

    cout << "Welcome to my Weekly Payroll program!!" << endl;
    cout << "Enter your employee ID number (numbers only): ";
    cin >> employeeID;
    cout << "Enter number of hours worked (whole numbers): ";
    cin >> hoursWorked;
    cout << "Enter the hourly rate: ";
    cin >> hourlyRate;
    cout << "Enter the federal withholding rate: ";
    cin >> fedWithholdingRate;

    totalGrossPay = hoursWorked * hourlyRate;
    fedTaxWithholding = totalGrossPay * fedWithholdingRate / 100;
    totalNetPay = totalGrossPay - fedTaxWithholding;

    cout << "\nYour Payroll Summary:" << endl;
    cout << "Total Gross Pay: $" << totalGrossPay << endl;
    cout << "Federal Tax Withholding: $" << fedTaxWithholding << endl;
    cout << "Net Pay: $" << totalNetPay << endl;

    cout << "\nThank you for using my Weekly Payroll program!!";
  return 0;
}




// ------------- DESIGN -------------
/* 
Program Name:

Program Description:
This program will read the employee ID, number of hours worked, hourly rate and federal witholding rate
and calculate the total gross pay, federal tax withholding and net pay.

Design:
A. INPUT
Define the input variables including name data type. 
int employeeID
int hoursWorked
int hourlyRate
int fedWithholdingRate

B. OUTPUT
Define the output variables including data types. 
int totalGrossPay
int fedTaxWithholding
int totalNetPay

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

totalGrossPay = hoursWorked * hourlyRate
fedTaxWithholding = totalGrossPay * (fedWithholdingRate / 100)
totalNetPay = totalGrossPay - fedTaxWithholding

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DECALRE integer employeeID
DECALRE integer hoursWorked
DECALRE integer hourlyRate
DECALRE integer fedWithholdingRate

DECALRE integer totalGrossPay
DECALRE integer fedTaxWithholding
DECALRE integer totalNetPay

DISPLAY "Welcome to my Weekly Payroll program!!"
DISPLAY "Enter your employee ID Number (numbers only): "
INPUT employeeID
DISPLAY "Enter number of hours worked (whole numbers): "
INPUT hoursWorked
DISPLAY "Enter the hourly rate: "
INPUT hourlyRate
DISPLAY "Enter federal withholding rate: "
INPUT fedWithholdingRate

SET totalGrossPay = hoursWorked * hourlyRate
SET fedTaxWithholding = totalGrossPay * (fedWithholdingRate / 100)
SET totalNetPay = totalGrossPay - fedTaxWithholding

DISPLAY "Your Payroll Summary:"
DISPLAY "Total Gross Pay: $" + totalGrossPay
DISPLAY "Federal Tax Withholding: $" + fedTaxWithholding
DISPLAY "Net Pay: $" + totalNetPay

DISPLAY "Thank you for using my Weekly Payroll program!!"

SAMPLE RUNS
Copy from assignment document.

///////////Sample Run 1///////////
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 34567
Enter number of hours worked (whole numbers): 40
Enter the hourly rate: 17
Enter the federal withholding rate: 15

Your Payroll Summary:
Total Gross Pay: $680
Federal Tax Withholding: $102
Net Pay: $578

Thank you for using my Weekly Payroll program!!
///////////Sample Run 2///////////
Welcome to my Weekly Payroll program!!
Enter your employee ID number (numbers only): 12345
Enter number of hours worked (whole numbers): 30
Enter the hourly rate: 22
Enter the federal withholding rate: 10

Your Payroll Summary:
Total Gross Pay: $660
Federal Tax Withholding: $66
Net Pay: $594

Thank you for using my Weekly Payroll program!!
//////////////////////////////////////

*/