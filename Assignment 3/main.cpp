// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 3
// Date:        7/13/2027
// Description: Washington State Ferries
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         3
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
    int numAdults, numSeniors, numYouths, totalRiders, maxRiders;
    int numBikes = 0;
    double totalCharge;
    char bRidingVehicle;

    cout << "Welcome to the Washington State Ferries Fare Calculator!\n" << endl;
    cout << left << setw(67) << "Fare Description";
    cout << right << "Ticket $" << endl;
    cout << left << setw(67) << setfill(' ') << "--------------------------------------";
    cout << right << setfill(' ') << "--------" << endl;
    cout << left << setw(67) << "Vehicle Under 14' (less than 168\") & Driver" << right << " $57.90" << endl;
    cout << left << setw(67) << "Adult (age 19 - 64)" << right << " $14.95" << endl;
    cout << left << setw(67) << "Senior (age 65 & over) / Disability" << right << " $7.40" << endl;
    cout << left << setw(67) << "Youth (age 6 - 18)" << right << " $5.55" << endl;
    cout << left << setw(67) << "Bicycle Surcharge (included with Vehicle)" << right << " $4.00" << endl;

    cout << "\nAre you riding a vehicle on the Ferry (Y/N): ";
    cin >> bRidingVehicle;

    if(((bRidingVehicle == 'y') || (bRidingVehicle == 'Y')) || ((bRidingVehicle == 'n') || (bRidingVehicle == 'N'))){
        if((bRidingVehicle == 'y') || (bRidingVehicle == 'Y')){
            maxRiders = 21; //20 NOT including driver
        } else {
            maxRiders = 20; //20 with NO driver
        }

        cout << "How many adults? ";
        cin >> numAdults;
        if(cin.fail() || numAdults < 0){
            cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
            cout << "\nThank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        cout << "How many seniors? ";
        cin >> numSeniors;        
        if(cin.fail() || numSeniors < 0){
            cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
            cout << "\nThank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }
        
        cout << "How many youths? ";
        cin >> numYouths;
        if(cin.fail() || numYouths < 0){
            cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
            cout << "\nThank you for using Washington State Ferries Fare Calculator!" << endl;
            return 0;
        }

        if((bRidingVehicle == 'n') || (bRidingVehicle == 'N')){
            cout << "How many bikes? ";
            cin >> numBikes;
            if(cin.fail() || numBikes < 0){
                cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
                cout << "\nThank you for using Washington State Ferries Fare Calculator!" << endl;
                return 0;
            }
        }
        
        totalRiders = numAdults + numSeniors + numYouths + numBikes;

        if (totalRiders > maxRiders) {
            cout << "\nUh oh!! Too many people in your group. Split into " << ceil(static_cast<double>(totalRiders) / maxRiders) << " groups and try again!" << endl;
        } else {
            totalCharge = (bRidingVehicle == 'y' || bRidingVehicle == 'Y') * 57.90 + numAdults * 14.95 + numSeniors * 7.40 + numYouths * 5.55 + numBikes * 4.00;
            
            cout << fixed << setprecision(2);
            cout << "\nYour total charge is $" << totalCharge << endl;

            if(totalCharge < 100){
                cout << "\nIf you spend $" << 100 - totalCharge << " more, you are eligible for a free adult ticket for the next trip." << endl;
            } else {
                cout << "\nCongratulations! You qualify for a free adult ticket for the next trip!";
            }
        }
    } else {
        cout << "\nError!! Invalid answer!! Please try again later!!!" << endl;
    }

    cout << "\nThank you for using Washington State Ferries Fare Calculator!" << endl;

    return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: 
Washington State Ferries

Program Description:
There are times when we want our programs to execute differently, depending on the input. To do this we will use branch statements, or if/else statements, to choose which code to execute depending on the result of a conditional expression we create.

Design:
A. INPUT
Define the input variables including name data type. 
char bRidingVehicle
int numAdults
int numSeniors
int numYouths
int numBikes

B. OUTPUT
Define the output variables including data types. 
double totalCharge

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
totalCharge = (true/false if riding a vehicle * 57.90) + (numAdults * 14.95) + (numSeniors * 7.40) + (numYouths * 5.55) + (numBikes * 4.00)
100 - totalCharges //If totalCharges < 100 for how much more for free adult ticket

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DECLARE numAdults, numSeniors, numYouths, totalCharge, bRidingVehicle

DISPLAY "Welcome to the Washington State Ferries Fare Calculator!"
DISPLAY Fare Fees table (Fare Description & Ticket $)

DISPLAY "Are you riding a vehicle on the Ferry (Y/N): "
INPUT bRidingVehicle

DISPAY "How many adults? "
INPUT numAdults
DISPAY "How many seniors? "
INPUT numSeniors
DISPAY "How many youths? "
INPUT numYouths

SET totalCharge = (true/false if riding a vehicle * 57.90) + (numAdults * 14.95) + (numSeniors * 7.40) + (numYouths * 5.55) + (numBikes * 4.00)


DISPLAY "Your total charge is " + totalCharge
IF (totalCharge >= 100){
DISPLAY "If you spend $" + (100 - totalCharges) + " more, you are eligible for a free adult ticket for the next trip"
}ELSE{
DISPLAY "Congratulations! You qualify for a free adult ticket for the next trip!"
}
DISPLAY "Thank you for using Washington State Ferries Fare Calculator!"

SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): y

How many adults? 2
How many seniors? 1
How many youths? 0

Your total charge is $95.20

If you spend $4.80 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!
//////////////////////////////////
///////////Sample Run 2///////////
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): a

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!
//////////////////////////////////
///////////Sample Run 3///////////
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 2
How many seniors? 1
How many youths? 1
How many bikes? 2

Your total charge is $50.85

If you spend $49.15 more, you are eligible for a free adult ticket for the next trip.

Thank you for using Washington State Ferries Fare Calculator!
//////////////////////////////////
///////////Sample Run 4///////////
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)     
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n
How many adults? -7

Error!! Invalid answer!! Please try again later!!!

Thank you for using Washington State Ferries Fare Calculator!
//////////////////////////////////
///////////Sample Run 5///////////
Welcome to the Washington State Ferries Fare Calculator!

Fare Description                                           Ticket $
--------------------------------------                     --------
Vehicle Under 14' (less than 168") & Driver                 $57.90
Adult (age 19 - 64)                                         $14.95
Senior (age 65 & over) / Disability                         $7.40
Youth (age 6 - 18)                                          $5.55
Bicycle Surcharge (included with Vehicle)                   $4.00

Are you riding a vehicle on the Ferry (Y/N): n

How many adults? 12
How many seniors? 4
How many youths? 5
How many bikes? 2

Uh oh!! Too many people in your group. Split into 2 groups and try again!

Thank you for using Washington State Ferries Fare Calculator!
//////////////////////////////////


*/