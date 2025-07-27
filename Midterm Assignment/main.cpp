// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Midterm Exam
// Date:        7/27/2027
// Description: Phrases and subphrases
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         5
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

using namespace std;

int main() {

    string namePlayer1, namePlayer2, namePlayer3;
    int numRocksPlayer1, numRocksPlayer2, numRocksPlayer3;
    float avgRocks;
    string firstPlaceName, secondPlaceName, thirdPlaceName;
    int tieType; //Determines if 3 way tie, 2 way tie or only 1 winner
    int const NUM_PLAYERS = 3;

    cout << "Welcome to the Rock Collector Championships!" << endl;

    cout << "\nEnter player 1 name: ";
    getline(cin, namePlayer1);
    cout << "How many rocks did " << namePlayer1 << " collect? ";
    cin >> numRocksPlayer1;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    if(numRocksPlayer1 < 0){
        cout << "Invalid amount. 0 will be entered." << endl;
        numRocksPlayer1 = 0;
    }

    cout << "\nEnter player 2 name: ";
    getline(cin, namePlayer2);
    cout << "How many rocks did " << namePlayer2 << " collect? ";
    cin >> numRocksPlayer2;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    if(numRocksPlayer2 < 0){
        cout << "Invalid amount. 0 will be entered." << endl;
        numRocksPlayer2 = 0;
    }

    cout << "\nEnter player 3 name: ";
    getline(cin, namePlayer3);
    cout << "How many rocks did " + namePlayer3 + " collect? ";
    cin >> numRocksPlayer3;
    if(numRocksPlayer3 < 0){
        cout << "Invalid amount. 0 will be entered." << endl;
        numRocksPlayer3 = 0;
    }

    avgRocks = (numRocksPlayer1 + numRocksPlayer2 + numRocksPlayer3) / static_cast<float>(NUM_PLAYERS);


    //0 = no tie
    //1 = player1 and player2 tie
    //2 = player1 and player3 tie
    //3 = player2 and player3 tie
    //6 = three way tie
    tieType = (numRocksPlayer1 == numRocksPlayer2) + 2*(numRocksPlayer1 == numRocksPlayer3) + 3*(numRocksPlayer2 == numRocksPlayer3);

    if (tieType == 0){
            
        if(numRocksPlayer1 > numRocksPlayer2 && numRocksPlayer1 > numRocksPlayer3){
            firstPlaceName = namePlayer1;
                if(numRocksPlayer2 > numRocksPlayer3){
                    secondPlaceName = namePlayer2;
                    thirdPlaceName = namePlayer3;
                } else {
                    secondPlaceName = namePlayer3;
                    thirdPlaceName = namePlayer2;
                }
        } else if(numRocksPlayer2 > numRocksPlayer3) {
            firstPlaceName = namePlayer2;
                if(numRocksPlayer1 > numRocksPlayer3){
                    secondPlaceName = namePlayer1;
                    thirdPlaceName = namePlayer3;
                } else {
                    secondPlaceName = namePlayer3;
                    thirdPlaceName = namePlayer1;
                }

        } else {
            firstPlaceName = namePlayer3;
            if(numRocksPlayer1 > numRocksPlayer2){
                secondPlaceName = namePlayer1;
                thirdPlaceName = namePlayer2;
            } else {
                secondPlaceName = namePlayer2;
                thirdPlaceName = namePlayer1;
            }
        }

    }


    switch(tieType){
        case 0: //No ties
            cout << "\n" << firstPlaceName << " is in first place!" << endl;
            cout << secondPlaceName << " is in second place!" << endl;
            cout << thirdPlaceName << " is in third place!" << endl;
            break;
        case 1: //player1 and player2 tie
            cout << '\n' << namePlayer1 + " and " + namePlayer2 + " are tied for first place." << endl;
            cout << namePlayer3 + " is in second place!" << endl;
            break;
        case 2: //player1 and player3 tie
            cout << '\n' << namePlayer1 + " and " + namePlayer3 + " are tied for first place" << endl;
            cout << namePlayer2 + " is in second place!" << endl;
            break;
        case 3: //player2 and player3 tie
            cout << '\n' << namePlayer2 + " and " + namePlayer3 + " are tied for first place." << endl;
            cout << namePlayer1 + " is in second place!" << endl;
            break;
        case 6: //three way tie
            cout << '\n' << "It is a three way tie!" << endl;
            break;
        default: //error
            cout << '\n' << "!!ERROR IN DETERMINING TIE!!" << endl;
            break;
    }

    cout << fixed << setprecision(2) << "\nThe average number of rocks collected by the top three players is " << avgRocks << " rocks!" << endl;

    cout << "\nCongratulations Rock Collectors!";

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
string namePlayer1, namePlayer2, namePlayer3
int numRocksPlayer1, numRocksPlayer2, numRocksPlayer3

B. OUTPUT
Define the output variables including data types. 
avgRocks

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
no calculations
avgRocks = (numRocksPlayer1 + numRocksPlayer2 + numRocksPlayer3) / NUM_PLAYERS

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DECLARE namePlayer1, namePlayer2, namePlayer3
DECLARE numRocksPlayer1, numRocksPlayer2, numRocksPlayer3, avgRocks
DECLARE tieType //Determines if 3 way tie, 2 way tie or only 1 winner
DECLARE const NUM_PLAYERS = 3

DISPLAY "Welcome to the Rock Collector Championships!"

DISPLAY "Enter player 1 name: "
INPUT namePlayer1
DISPLAY "How many rocks did " + player1Name + " collect? "
INPUT numRocksPlayer1

DISPLAY "Enter player 2 name: "
INPUT namePlayer2
DISPLAY "How many rocks did " + player2Name + " collect? "
INPUT numRocksPlayer2

DISPLAY "Enter player 3 name: "
INPUT namePlayer3
DISPLAY "How many rocks did " + player3Name + " collect? "
INPUT numRocksPlayer3

SET avgRocks = (numRocksPlayer1 + numRocksPlayer2 + numRocksPlayer3) / NUM_PLAYERS

//0 = no tie
//1 = player1 and player2 tie
//2 = player1 and player3 tie
//3 = player2 and player3 tie
//6 = three way tie
SET tieType = (numRocksPlayer1 == numRocksPlayer2) + 2*(numRocksPlayer1 == numRocksPlayer3) + 3*(numRocksPlayer2 == numRocksPlayer3)

switch tieType
    case 0
        if(numRocksPlayer1 > numRocksPlayer2 && numRocksPlayer1 > numRocksPlayer3)
            DISPLAY namePlayer1 + " is in first place"
            if(numRocksPlayer2 > numRocksPlayer3)
                DISPLAY namePlayer2 + " is in second place"
                DISPLAY namePlayer3 + " is in third place"
            else
                DISPLAY namePlayer3 + " is in second place"
                DISPLAY namePlayer2 + " is in third place"
        else if(numRocksPlayer2 > numRocksPlayer3)
            DISPLAY namePlayer2 + " is in first place"
            if(numRocksPlayer1 > numRocksPlayer3)
                DISPLAY namePlayer1 + " is in second place"
                DISPLAY namePlayer3 + " is in third place"
            else
                DISPLAY namePlayer3 + " is in second place"
                DISPLAY namePlayer1 + " is in third place"
        else
            DISPLAY namePlayer3 + " is in first place"
            if(numRocksPlayer1 > numRocksPlayer2)
                DISPLAY namePlayer1 + " is in second place"
                DISPLAY namePlayer2 + " is in third place"
            else
                DISPLAY namePlayer2 + " is in second place"
                DISPLAY namePlayer1 + " is in third place"
    case 1 //player1 and player2 tie
        DISPLAY namePlayer1 + " and " + namePlayer2 + " are tied for first place"
        DISPLAY namePlayer3 + " is in second place"
    case 2 //player1 and player3 tie
        DISPLAY namePlayer1 + " and " + namePlayer3 + " are tied for first place"
        DISPLAY namePlayer2 + " is in second place"
    case 3 //player2 and player3 tie
        DISPLAY namePlayer2 + " and " + namePlayer3 + " are tied for first place"
        DISPLAY namePlayer1 + " is in second place"
    case 6 //three way tie
        DISPLAY "It is a three way tie!"
    default //error
        DISPLAY "ERROR"
DISPLAY "The average number of rocks collected by the top three players is " + avgRocks + " rocks!"

DISPLAY "Congratulations Rock Collectors!"

SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to the Rock Collector Championships!

Enter player 1 name: Gordan Freeman
How many rocks did Gordan Freeman collect? -9
Invalid amount. 0 will be entered.

Enter player 2 name: Link
How many rocks did Link collect? 45

Enter player 3 name: D. Va
How many rocks did D. Va collect? 45

Link and D. Va are tied for first place.
Gordan Freeman is in second place!

The average number of rocks collected by the top three players is 30.00 rocks!

Congratulations Rock Collectors!
//////////////////////////////////
///////////Sample Run 2///////////
Welcome to the Rock Collector Championships!

Enter player 1 name: Mario
How many rocks did Mario collect? 56

Enter player 2 name: Master Chief
How many rocks did Master Chief collect? 56

Enter player 3 name: Sonic
How many rocks did Sonic collect? 56

It is a three way tie!

The average number of rocks collected by the top three players is 56.00 rocks!

Congratulations Rock Collectors!
//////////////////////////////////
///////////Sample Run 3///////////
Welcome to the Rock Collector Championships!

Enter player 1 name: King Dedede
How many rocks did King Dedede collect? 57
Enter player 2 name: Samus
How many rocks did Samus collect? 102

Enter player 3 name: Kirby
How many rocks did Kirby collect? 62

Samus is in first place!
Kirby is in second place.
King Dedede is in third place.

The average number of rocks collected by the top three players is 73.67 rocks!

Congratulations Rock Collectors!
//////////////////////////////////


*/