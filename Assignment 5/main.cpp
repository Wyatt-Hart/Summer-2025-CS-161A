// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 5
// Date:        8/3/2025
// Description: Pizza Party Statistics program
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

    int numPeople, numPizzas;
    float costPerPizza, avgSlicesPerPerson, costOfPizzas, salesTax, deliveryFee, totalCost;
    char running = 'y';
    const int slicesPerPizza = 8;
    const float taxRate = 0.07;
    const float deliveryFeeRate = 0.2;

    cout << "Welcome to my Pizza Party Statistics program!\n";

    do{
        cout << "\nEnter the number of people, average number of slices per person, and the cost of a pizza separated by a space: ";
        cin >> numPeople;
        cin >> avgSlicesPerPerson;
        cin >> costPerPizza;

        numPizzas = ceil(numPeople * avgSlicesPerPerson / slicesPerPizza);
        costOfPizzas = numPizzas * costPerPizza;
        salesTax = costOfPizzas * taxRate;
        deliveryFee = (costOfPizzas + salesTax) * deliveryFeeRate;
        totalCost = costOfPizzas + salesTax + deliveryFee;

        cout << fixed << setprecision(2);
        cout << setw(20) << left << "\nNumber of pizzas: " << right << " " << numPizzas;
        cout << setw(20) << left << "\nCost of pizzas: " << right<< "$" << costOfPizzas;
        cout << setw(20) << left << "\nTax: " << right<< "$" << salesTax;
        cout << setw(20) << left << "\nDelivery: " << right<< "$" << deliveryFee;
        cout << setw(20) << left << "\nTotal Cost: " << right<< "$" << totalCost << endl;

        cout << "\nDo you want to enter more (y/n): ";
        cin >> running;
    } while(running == 'y' || running == 'Y');

    cout << "\nThank you for using my program!";

    return 0;
}




// ------------- DESIGN -------------
/* 
Program Name: 
Pizza Party Statistics program

Program Description:
In this assignment you will be entering the number of people attending, the average number of slices per person and the cost of one pizza and you will continue asking the user for the number of people attending, the average number of slices per person and the cost of one pizza until they are done. While the user wants to add more input, you will add the data to accumulators (an accumulator is a variable the program uses to calculate a sum or product of a series of values) to perform statistical analysis after they are done.

Design:
A. INPUT
Define the input variables including name data type. 
int numPeople, costPerPizza
float avgSlicesPerPerson
bool continue

B. OUTPUT
Define the output variables including data types. 
int numPizzas, costOfPizzas, salesTax, deliveryFee, totalCost

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
no calculations
numPizzas = ceil(numPeople * avgSlicesPerPerson / 8)
costOfPizzas = numPizzas * costPerPizza
salesTax = costOfPizzas * 0.07
deliveryFee = costOfPizzas * 0.2
totalCost = costOfPizzas + salesTax + deliveryFee

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DECLARE numPeople, costPerPizza, numPizzas;
DECLARE avgSlicesPerPerson, costOfPizzas, salesTax, deliveryFee, totalCost;
DECLARE continue = true

DISPLAY "Welcome to my Pizza Party Statistics program!"

    while(continue){
    DISPLAY "Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: "
    INPUT numPeople, avgSlicesPerPerson, costPerPizza

    SET numPizzas = ceil(numPeople * avgSlicesPerPerson / 8)
    SET costOfPizzas = numPizzas * costPerPizza
    SET salesTax = costOfPizzas * 0.07
    SET deliveryFee = costOfPizzas * 0.2
    SET totalCost = costOfPizzas + salesTax + deliveryFee

    DISPLAY "Number of pizzas: " + numPizzas
    DISPLAY "Cost of pizzas: $" + costOfPizzas
    DISPLAY "Tax: $" + salesTax
    DISPLAY "Delivery: $"deliveryFee
    DISPLAY "Total Cost: $" + totalCost

    DISPLAY "Do you want to enter more (y/n): "
    INPUT continue
}

DISPLAY "Thank you for using my program!"


SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to my Pizza Party Statistics program!

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 10  2.6  10.50

Number of pizzas: 4
Cost of pizzas:  $42.00
Tax:             $2.94
Delivery:        $8.99
Total Cost:      $53.93

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 9   2.5   10.95

Number of pizzas: 3
Cost of pizzas:  $32.85
Tax:             $2.30
Delivery:        $7.03
Total Cost:      $42.18

Do you want to enter more (y/n): y

Enter the number of people, average number of slices per person, and the cost of a pizza separated by a space: 14   3.2   14.95

Number of pizzas: 6
Cost of pizzas:  $89.70
Tax:             $6.28
Delivery:        $19.20
Total Cost:      $115.17

Do you want to enter more (y/n): n

Number of entries: 3
Total number of pizzas: 13
Average number of pizzas: 4.3
Maximum number of people: 14
Maximum cost of pizzas: $115.17

Thank you for using my program!
//////////////////////////////////

*/