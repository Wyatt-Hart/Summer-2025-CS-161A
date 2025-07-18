// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 4
// Date:        7/17/2027
// Description: Phrases and subphrases
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         4
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
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    string firstPhrase, secondPhrase, subPhrase, mainPhrase;
    int subStrIndex;

    cout << "Welcome to the Phrases and Subphrases program!" << endl;

    cout << "\nEnter Phrase 1: ";
    getline(cin, firstPhrase);
    cout << "You entered: " + firstPhrase;
    cout << "\nEnter Phrase 2: ";
    getline(cin, secondPhrase);
    cout << "You entered: " + secondPhrase << endl;

    subStrIndex = firstPhrase.find(secondPhrase);
    
    if(subStrIndex == string::npos){
        subStrIndex = secondPhrase.find(firstPhrase);
        if(subStrIndex > 0){
            subPhrase = firstPhrase;
            mainPhrase = secondPhrase;
        }
    } else {
        subPhrase = secondPhrase;
        mainPhrase = firstPhrase;
    }

    if(subStrIndex > 0){
        cout << "\n" + subPhrase + " is found in " + mainPhrase << endl;
        cout << mainPhrase.substr(subStrIndex, mainPhrase.size() - subStrIndex) << endl;

    } else if(subStrIndex == 0){
        cout << "\nBoth phrases match" << endl;
    } else {
        cout << "\nNo match" << endl;
    }

    cout << "\nThank you for using my program!" << endl;

    return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: 
Phrases and subphrases

Program Description:
In the last assignment you used branch statements, or if/else statements, to choose 
which code to execute depending on the result of a conditional expression using numbers. In 
this assignment you will continue to write conditional expressions using if statements for comparing strings of text.

Design:
A. INPUT
Define the input variables including name data type. 
string firstPhrase
string secondPhrase

B. OUTPUT
Define the output variables including data types. 
string subPhrase

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

DECLARE firstPhrase
DECLARE secondPhrase
DECLARE subStrIndex
DECLARE subPhrase

DISPLAY "Welcome to the Phrases and Subphrases program!"

DISPLAY "Enter Phrase 1: "
INPUT firstPhrase
DISPLAY "You entered: " + firstPhrase
DISPLAY "Enter Phrase 2: "
INPUT secondPhrase
DISPLAY "You entered: " + secondPhrase

SET subStrIndex = firstPhrase.find(secondPhrase)
if(subStrIndex != -1){
    SET subPhrase = firstPhrase.substr(subStrIndex, secondPhrase.size())
    DISPLAY secondPhrase + " is found in " + firstPhrase
    DISPLAY subPhrase
} else{
    DISPLAY "No instances of " + secondPhrase + " could be found in " + firstPhrase
}

DISPLAY "Thank you for using my program!"


SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: truck
You entered: truck
Enter Phrase 2: firetruck is here
You entered: firetruck is here

truck is found in firetruck is here
truck is here

Thank you for using my program!
//////////////////////////////////
///////////Sample Run 2///////////
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: the green grass grows
You entered: the green grass grows
Enter Phrase 2: green grass
You entered: green grass

green grass is found in the green grass grows
green grass grows

Thank you for using my program!
//////////////////////////////////
///////////Sample Run 3///////////
Welcome to the Phrases and Subphrases program!

Enter Phrase 1: He was between a rock and a hard place
You entered: He was between a rock and a hard place
Enter Phrase 2: rock
You entered: rock

rock is found in He was between a rock and a hard place
rock and a hard place

Thank you for using my program!
//////////////////////////////////


*/