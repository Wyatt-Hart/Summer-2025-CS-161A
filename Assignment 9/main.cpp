// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 9
// Date:        8/24/2025
// Description: Find Min and Max using Functions
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         9
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

void getInput(int &num);
void doStats(int num);


int main() {
    int numIntegers = 0;

    cout << "Welcome to my Final Exam Practice." << endl;

    getInput(numIntegers);
    if(numIntegers <= 0){
        cout << "No integers were entered." << endl;
    } else {
        doStats(numIntegers);
    }

    cout << "Thank you for using my program.";
    

    return 0;
}


void getInput(int &num)
{
    // Write a program that prompts a user for the number of positive integers (0 is neither positive or negative) they want to enter
    // This function should not output any error messages - that should be done in main().

    cout << "How many positive integers do you want to process? ";
    cin >> num;
    if(!cin){
      cin.clear();
      cin.ignore(100, '\n');
    }

    return;
}

void doStats(int num)
{
    //Use a for loop to prompt for each number, adding the position number in the prompt. Do not start at position 0!
    int input, minPosition, maxPosition;
    int minNum = 0;
    int maxNum = 0;

    for(int i = 1; i <= num; i++){

        cout << "Enter integer #" << i << ": ";

        cin >> input;
        if(!cin || input <= 0){
            cin.clear();
            cin.ignore(100, '\n');
            i--;
            cout << "Enter a positive integer!" << endl;
        } else {
            if(i == 1){
                minNum = input;
                minPosition = i;
                maxNum = input;
                maxPosition = i;
            } else if(input < minNum){
                minNum = input;
                minPosition = i;
            } else if(input > maxNum){
                maxNum = input;
                maxPosition = i;
            }
        }
    }

    cout << "The minimum number entered was " << minNum << " enetered in position " << minPosition << "." << endl;
    cout << "The maximum number entered was " << maxNum << " enetered in position " << maxPosition << "." << endl;

    return;
}


// ------------- DESIGN -------------
/* 
Program Name: Find Min and Max using Functions


Program Description: 
Data analysis is important in business to understand problems facing an organization, and to explore data in meaningful ways. Data in itself is merely facts and figures. Data analysis organizes, interprets, structures and presents the data into useful information that provides context for the data.

Design:
A. INPUT
Define the input variables including name data type. 
int numIntegers
int num

B. OUTPUT
Define the output variables including data types. 
int minNum, minPosition, maxNum, maxPosition

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
no calculations

no calculations


D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


DECLARE numIntegers

DISPLAY "Welcome to my Final Exam Practice."


DECLARE num
DISPLAY "How many positive integers do you want to process? "
INPUT num;

if(num <= 0)
    DISPLAY "No integers were entered."
else
    DECLARE input, minPosition, maxPosition
    DECLARE minNum = 0
    int maxNum = 0

    for(int i = 1; i <= num; i++){

        DISPLAY "Enter integer #" + i + ": "

        INPUT input
        if(input <= 0){
            i--
            DISPLAY "Enter a positive integer!"
        } else {
            if(i == 1){
                SET minNum = input;
                SET minPosition = i;
                SET maxNum = input;
                SET maxPosition = i;
            } else if(input < minNum){
                SET minNum = input;
                SET minPosition = i;
            } else if(input > maxNum){
                SET maxNum = input;
                SET maxPosition = i;
            }
        }
    }

    DISPLAY "The minimum number entered was " + minNum + " enetered in position " + minPosition + "."
    DISPLAY "The maximum number entered was " + maxNum + " enetered in position " + maxPosition + "."

DISPLAY "Thank you for using my program."

SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to my Final Exam Practice.
How many positive integers do you want to process? 0
No integers were entered.
Thank you for using my program.
//////////////////////////////////
///////////Sample Run 2///////////
Welcome to my Final Exam Practice.
How many positive integers do you want to process? -9
No integers were entered.
Thank you for using my program.
//////////////////////////////////
///////////Sample Run 3///////////
Welcome to my Final Exam Practice.
How many positive integers do you want to process? 3
Enter integer #1: 1
Enter integer #2: 2
Enter integer #3: 3
The minimum number entered was 1 entered in position 1.
The maximum number entered was 3 entered in position 3.
Thank you for using my program.
//////////////////////////////////
///////////Sample Run 4///////////
How many positive integers do you want to process? 4
Enter integer #1: 2
Enter integer #2: 2
Enter integer #3: 2
Enter integer #4: 2
The minimum number entered was 2 entered in position 1.
The maximum number entered was 2 entered in position 1.
Thank you for using my program.
//////////////////////////////////
///////////Sample Run 5///////////
How many positive integers do you want to process? 4
Enter integer #1: 10
Enter integer #2: -9
Enter a positive integer!
Enter integer #2: 0
Enter a positive integer!
Enter integer #2: -3
Enter a positive integer!
Enter integer #2: 4
Enter integer #3: 3
Enter integer #4: -9
Enter a positive integer!
Enter integer #4: 5
The minimum number entered was 3 entered in position 3.
The maximum number entered was 10 entered in position 1.
Thank you for using my program.
//////////////////////////////////

*/