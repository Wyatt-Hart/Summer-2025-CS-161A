// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 2
// Date:        7/6/2027
// Description: Oreo cookie calorie calculator
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         2
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

using namespace std;

int main() {
    
    int oreosEaten;
    double numServingsEaten;
    double caloriesConsumed;

    cout << "Welcome to the Oreo Calculator!\n" << endl;
    cout <<  "Enter the number of Oreos eaten: ";
    cin >> oreosEaten;

    numServingsEaten = static_cast<float>(oreosEaten / 5.0);
    caloriesConsumed = static_cast<float>(160.0 / 5 * oreosEaten);

    cout << "\n" << oreosEaten << " Oreos equals " << numServingsEaten << " servings!\n";
    cout << fixed << setprecision(1) << "You consumed " << caloriesConsumed << " calories.\n" << endl;

    cout << "Keep eating Oreos!";

    return 0;
}




// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 
int oreosEaten

B. OUTPUT
Define the output variables including data types. 
double numServingsEaten
double caloriesConsumed

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
numServingsEaten = oreosEaten / 5
caloriesConsumed = 160 / 5 * oreosEaten

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DECLARE oreosEaten
DECLARE numServingsEaten
DECLARE caloriesConsumed

DISPLAY "Welcome to the Oreo Calculator!"
DISPLAY "Enter the number of Oreos eaten: "

INPUT oreos Eaten

SET numServingsEaten = oreosEaten / 5
SET caloriesConsumed = 160 / 5 * oreosEaten

DISPLAY oreosEaten + " Oreos equals " + numServingsEaten + "!"
DISPLAY "You consumed " + caloriesConsumed + " calories."

DISPLAY "Keep eating Oreos!"

SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 12

12 Oreos equals 2.4 servings!
You consumed 384.0 calories.

Keep eating Oreos!
///////////Sample Run 2///////////
Welcome to the Oreo Calculator!

Enter the number of Oreos eaten: 3

3 Oreos equals 0.6 servings!
You consumed 96.0 calories.

Keep eating Oreos!
//////////////////////////////////////


*/