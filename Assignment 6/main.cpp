// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 6
// Date:        8/10/2025
// Description: Vending Machine
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         6
// Participation:   100
// Challenge:       100
// Labs:            100


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
#include <string>
#include <iomanip>
#include <cmath>
#include <cctype>

using namespace std;

int main() {

    float totalBalance = 0;
    float totalCost = 1;
    const float costPerCup = 0.25;

    cout << "Welcome to my Coffee/Tea Vending Machine!\n" << endl;

    while(totalCost > totalBalance){
        int coinInput = 5;
        char optionInput = ' ';
        char input = ' ';
        int numOfCups;
        totalCost = 0;

        while(coinInput != 0){
            cout << "Enter coins - 5, 10, or 25 only: ";
            if(coinInput == 0 || coinInput == 5 || coinInput == 10 || coinInput == 25){
                cin >> coinInput;
                totalBalance += (coinInput / 100.00);
            }else {
                cout << "\nInvalid Denomination! Please enter a valid Denomination!";
            }
        }

        cout << fixed << setprecision(2);
        cout << "\nYour balance is $" << totalBalance << endl;

        cout << "\nPlease pick an option(%0.25 each):";
        cout << "\n\tC/c: Coffee";
        cout << "\n\tT/t: Tea";
        cout << "\n\tQ/q: Quit\n>> ";
        

        while(optionInput != 'C' && optionInput != 'c' && optionInput != 'T' && optionInput != 't' && optionInput != 'Q' && optionInput != 'q'){
            cin >> optionInput;
            switch(optionInput){
                case 'C':
                case 'c':
                case 'T':
                case 't':
                        while(!isdigit(input)){
                            cout << "How many would you like?\n>> ";
                            cin >> input;
                            if(isdigit(input)){
                                numOfCups = input - '0';
                            } else {
                                cout << "Invalid Option!" << endl;
                            }
                        }
                        totalCost = numOfCups * costPerCup;
                        
                case 'Q':
                case 'q':
                        if(totalCost <= totalBalance){
                            totalBalance -= totalCost;
                            cout << "\nYour total is $" << totalCost;
                            cout << "\nYour balance is $" << totalBalance;
                            totalBalance += totalCost;
                        } else {
                            cout << "\nYour total is $" << totalCost;
                            cout << "\nYour balance is $" << totalBalance;
                            cout << "\nNot enough change!! Please add more coins." << endl;
                        }
                        break;
                default:
                        cout << "\nInvalid Option! Please choose a valid option!\n>> ";
                        break;
            }
        }
    }

    cout << "\nThank you for using my Vending Machine Program!";

    return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: 
Vending Machine

Program Description:
In this assignment you will write a program for a Vending Machine that sells Coffee and Tea. Your program will first accept coins from the user until the user enters 0 (5, 10, or 25 only - no other numbers), then print a menu for dispensing Coffee or Tea to the user to choose from and then a prompt for the quantity. If the amount deposited is sufficient, the machine will dispense the item(s), else it should loop back and ask for more money, and present the menu again.

Design:
A. INPUT
Define the input variables including name data type. 


B. OUTPUT
Define the output variables including data types. 


C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
no calculations


D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DECLARE int coinInput = 1
DECLARE char optionInput
DECLARE float totalBalance
DECLARE const float costPerCup = 0.25

DISPLAY "Welcome to my Coffee/Tea Vending Machine!"

while(coinInput != 0){
    DISPLAY "Enter coins - 5, 10, or 25 only: "
    if(cointInput == 0 || coinInput == 5 || coinInput == 10 || 25){
        input cointInput
        SET totalBalance += cointInput
    }else {
        DISPLAY "Invalid Denomination! Please enter a valid Denomination!"
    }
}

DISPLAY "Your balance is $"

DISPLAY "Please pick an option(%0.25 each):"
DISPLAY "\tC/c: Coffee"
DISPLAY "\tT/t: Tea"
DISPLAY "\tQ/q: Quit\n>> "
INPUT optionInput

switch(optionInput)
    case 'C':
    case 'c':
    case 'T':
    case 't':
            DISPLAY "How many would you like?\n>> "
            INPUT numOfCups;
            set totalCost = numOfCups * costPerCup;
    case 'Q':
    case 'q':
            DISPLAY "Your total is $" + totalCost
            DISPLAY "Your balance is $" + totalBalance
            break;
    default:
            Display "Invalid Option! Please choose a valid option!\n>> "
            break;

DISPLAY "Thank you for using my Vending Machine Program!"


SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 10
Enter coins - 5, 10, or 25 only: 0

Your balance is $0.80

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> k
Invalid Option! Please choose a valid option!
>> 9
Invalid Option! Please choose a valid option!
>> c
How many would you like?
>> f
Invalid Option!
How many would you like?
>> 2

Your total: $0.50
Your balance: $0.30
Thank you for using my Vending Machine Program!
//////////////////////////////////
///////////Sample Run 2///////////
Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0

Your balance is $0.30

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> c

How many would you like?
>> 2

Your total is $0.50
Your balance is $0.30
Not enough change!! Please add more coins.

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0

Your balance: $0.60

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> T

How many would you like?
>> 1

Your total is $0.25
Your balance is $0.35

Thank you for using my Vending Machine Program!
//////////////////////////////////
///////////Sample Run 3///////////
Welcome to my Coffee/Tea Vending Machine!

Enter coins - 5, 10, or 25 only: 5
Enter coins - 5, 10, or 25 only: 25
Enter coins - 5, 10, or 25 only: 0
Your balance is $0.30

Please pick an option ($0.25 each):
    C/c: Coffee
    T/t: Tea
    Q/q: Quit
>> q

Your total is $0
Your balance is $0.30

Thank you for using my Vending Machine Program!
//////////////////////////////////

*/