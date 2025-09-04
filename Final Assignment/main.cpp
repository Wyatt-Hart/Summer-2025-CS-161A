// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Final Exam
// Date:        9/3/2025
// Description: Miles Tracker program
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         10
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
int calcTotal();


int main() {
    int goal = 0;
    int totalMiles = 0;

    cout << "Welcome to my Miles Tracker program." << endl;

    getInput(goal);
    if(goal <= 0){
        cout << "No miles were tracked this week." << endl;
    } else {
        totalMiles = calcTotal();

        cout << "You rode " << totalMiles << " miles this week." << endl;
        if(totalMiles > goal){
            cout << "Great job! You exceeded your goal by " << (totalMiles - goal) << " miles!" << endl;
        } else if(totalMiles == goal){
            cout << "Good job! You met your goal!" << endl;
        }else if(totalMiles < goal){
            cout << "Uh oh! You missed your goal by " << (goal - totalMiles) << " miles!" << endl;
        }
    }

    cout << "Keep riding!";
    

    return 0;
}


void getInput(int &goal)
{
    // Prompt a user for the number of miles they want to ride (walk, run, swim, whatever you want) this week. This is their goal.
    // If the user enters 0 or less, print a message that no miles were tracked this week. The message should be printed in main() and not in the function.

    cout << "How many miles do you want to ride this week? ";
    cin >> goal;
    if(!cin){
      cin.clear();
      cin.ignore(100, '\n');
    }

    return;
}

int calcTotal()
{
    int input, monMiles, tuesMiles, wedMiles, thurMiles, friMiles, satMiles, sunMiles;
    int totalMiles = 0;

    //In this function, use a for loop to prompt for the number of miles ridden each day for a week. Include the day of the week (Sunday, Monday, etc) in your prompt.
    for(int i = 0; i < 7; i++){

        switch (i){
            case 0:
                cout << "How many miles did you ride on Sunday? ";
                break;
            case 1:
                cout << "How many miles did you ride on Monday? ";
                break;
            case 2:
                cout << "How many miles did you ride on Tuesday? ";
                break;
            case 3:
                cout << "How many miles did you ride on Wednesday ";
                break;
            case 4:
                cout << "How many miles did you ride on Thursday? ";
                break;
            case 5:
                cout << "How many miles did you ride on Friday? ";
                break;
            case 6:
                cout << "How many miles did you ride on Saturday? ";
                break;
            default:
                cout << "**ERROR IN THE 1st SWITCH STATEMENT - calcTotal()**";
                break;
        }

        cin >> input;

        // If the user enters a number less than 0, print an error message and prompt for the same day again. 
        if(!cin || input < 0){
            cin.clear();
            cin.ignore(100, '\n');
            i--;
            cout << "Miles must be 0 or greater!" << endl;
        } else {
            // I was confused by the instructions since it explicitly says AFTER all of the days have been entered
            // to calculate the total so I decided to keep track of each and add them up after. If it didn't specify
            // this I would've chosen to have a single int variable called total and just do total += input and
            // return total at the end. I did it this way to meet the requirement of the assignment

            switch (i){
                case 0:
                    sunMiles = input;
                    break;
                case 1:
                    monMiles = input;
                    break;
                case 2:
                    tuesMiles = input;
                    break;
                case 3:
                    wedMiles = input;
                    break;
                case 4:
                    thurMiles = input;
                    break;
                case 5:
                    friMiles = input;
                    break;
                case 6:
                    satMiles = input;
                    break;
                default:
                    cout << "**ERROR IN THE 2nd SWITCH STATEMENT - calcTotal()**";
                    break;
            }
        }
    }

    // After all of the days have been entered, calculate the total miles for the week and return to main().
    totalMiles = monMiles + tuesMiles + wedMiles + thurMiles + friMiles + satMiles + sunMiles;

    return totalMiles;
}


// ------------- DESIGN -------------
/* 
Program Name: Final Exam


Program Description: Are you a runner, swimmer, or cyclist? Do you set goals and keep track of the number of miles each week? For your final exam, you will be writing a program to help a user set and keep track of their exercise goals!


Design:
A. INPUT
Define the input variables including name data type. 
int goal
int sunMiles, tuesMiles, wedMiles, thurMiles, friMiles, satMiles

B. OUTPUT
Define the output variables including data types. 
if goal > totalMiles
    int goal - int totalMiles
else if totalMiles > goals
    int totalMiles - int goals

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
no calculations

totalMiles = sunMiles + monMiles + tuesMiles + wedMiles + thurMiles + friMiles + satMiles

if goal > totalMiles
    int goal - int totalMiles
else if totalMiles > goals
    int totalMiles - int goals


D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


DECLARE int goal = 0
DECLARE int totalMiles = 0

DISPLAY "Welcome to my Miles Tracker program."

DISPLAY "How many miles do you want to ride this week? ";
INPUT goal;

if(goal <= 0){
    DISPLAY "No miles were tracked this week."
} else {
    DECLARE int input, monMiles, tuesMiles, wedMiles, thurMiles, friMiles, satMiles, sunMiles
    DECLARE int totalMiles = 0

    for(int i = 0; i < 7; i++){

        switch (i){
            case 0:
                DISPLAY "How many miles did you ride on Sunday? "
                break;
            case 1:
                DISPLAY "How many miles did you ride on Monday? "
                break;
            case 2:
                DISPLAY "How many miles did you ride on Tuesday? "
                break;
            case 3:
                DISPLAY "How many miles did you ride on Wednesday "
                break;
            case 4:
                DISPLAY "How many miles did you ride on Thursday? "
                break;
            case 5:
                DISPLAY "How many miles did you ride on Friday? "
                break;
            case 6:
                DISPLAY "How many miles did you ride on Saturday? "
                break;
            default:
                DISPLAY "**ERROR IN THE 1st SWITCH STATEMENT - calcTotal()**"
                break;
        }

        INPUT input;

        if(input < 0){
            SET i--;
            DISPLAY "Miles must be 0 or greater!" << endl;
        } else {
            switch (i){
                case 0:
                    SET sunMiles = input;
                    break;
                case 1:
                    SET monMiles = input;
                    break;
                case 2:
                    SET tuesMiles = input;
                    break;
                case 3:
                    SET wedMiles = input;
                    break;
                case 4:
                    SET thurMiles = input;
                    break;
                case 5:
                    SET friMiles = input;
                    break;
                case 6:
                    SET satMiles = input;
                    break;
                default:
                    DISPLAY "**ERROR IN THE 2nd SWITCH STATEMENT - calcTotal()**"
                    break;
            }
        }
    }

    SET totalMiles = monMiles + tuesMiles + wedMiles + thurMiles + friMiles + satMiles + sunMiles;

    DISPLAY "You rode " + totalMiles + " miles this week."
    if(totalMiles > goal){
        DISPLAY "Great job! You exceeded your goal by " + (totalMiles - goal) + " miles!"
    } else if(totalMiles == goal){
        DISPLAY "Good job! You met your goal!"
    }else if(totalMiles < goal){
        DISPLAY "Uh oh! You missed your goal by " + (goal - totalMiles) + " miles!"
    }
}

DISPLAY "Keep riding!";



SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? -9
Miles must be 0 or greater!
How many miles did you ride on Sunday? -3
Miles must be 0 or greater!
How many miles did you ride on Sunday? 0
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 0
You rode 50 miles this week.
Good job! You met your goal!
Keep riding!
//////////////////////////////////
///////////Sample Run 2///////////
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 100
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Uh oh! You missed your goal by 30 miles!
Keep riding!
//////////////////////////////////
///////////Sample Run 3///////////
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 50
How many miles did you ride on Sunday? 10
How many miles did you ride on Monday? 10
How many miles did you ride on Tuesday? 10
How many miles did you ride on Wednesday? 10
How many miles did you ride on Thursday? 10
How many miles did you ride on Friday? 10
How many miles did you ride on Saturday? 10
You rode 70 miles this week.
Great job! You exceeded your goal by 20 miles!
Keep riding!
//////////////////////////////////
///////////Sample Run 4///////////
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? 0
No miles were tracked this week.
Keep riding!
//////////////////////////////////
///////////Sample Run 5///////////
Welcome to my Miles Tracker program.
How many miles do you want to ride this week? -10
No miles were tracked this week.
Keep riding!
//////////////////////////////////

*/