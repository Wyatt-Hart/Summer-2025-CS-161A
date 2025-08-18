// ------------- FILE HEADER -------------
// Author:      Wyatt Hart
// Assignment:  Assignment 7
// Date:        8/17/2025
// Description: Grade Calculations
// Sources: 


// ------------- ZYBOOKS SCORES -------------
// https://learn.zybooks.com/zybook/PCCCS161ASummer25
// Chapter:         7
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

void welcome();
int readInt(string prompt);
double readScore(string prompt);
double assignAverage(int numAssigns);
double calcFinalScore(double assignAvg, double midterm, double final);
char calcLetterGrade(double finalScore);

int main() {
    int numAssigns;
    double assignAvg, midterm, final, finalScore;
    char finalGrade;

    welcome();
    numAssigns = readInt("Enter the number of assignments (0 to 10): ");
    assignAvg = assignAverage(numAssigns);
    midterm = readScore("Enter your midterm exam score: ");
    final = readScore("Enter your final exam score: ");

    finalScore = calcFinalScore(assignAvg, midterm, final);
    finalGrade = calcLetterGrade(finalScore);

    cout << fixed << setprecision(1);

    cout << "Your Final Numeric score is " << finalScore << endl;
    cout << "Your Final Grade is " << finalGrade << endl;

    cout << "Thank you for using my Grade Calculator!";

    return 0;
}


void welcome(){
    cout << "Welcome to my Final Grade Calculator!" << endl;
    
    cout << "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!" << endl;
    cout << "The number of assignments must be between 0 and 10." << endl;
    cout << "All scores entered must be between 0 and 4." << endl;

    return;
}

int readInt(string prompt){
    // This function should be used any time you read any integers from the user.
    // Use this function to read the number of Assignments from the user.
    
    int input;

    cout << prompt;
    cin >> input;
    while(!cin || (input > 10 || input < 0)){
      cout << "Invalid value! Please try again!" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      cout << prompt;
      cin >> input;
    }

    return input;
};

double readScore(string prompt){
    // to read all the scores from the user. Any time you read a score you must call this function.
    // The function must do data validation to make sure it is a numeric value, and that it is within the range of 0 to 4 inclusive.
    
    double input;

    cout << prompt;
    cin >> input;
    while(!cin || (input > 4 || input < 0)){
      cout << "Invalid score! Please try again!" << endl;
      cin.clear();
      cin.ignore(100, '\n');
      cout << prompt;
      cin >> input;
    }

    return input;
};

double assignAverage(int numAssigns){
    // to read the Assignment scores from the user.
    // This function must call readScore every time you read an Assignment score.
    // You must use a for loop to do this. Then calculate and return the average score.

    double assignAvg;
    double total;
    string input;
    double score;

    for(int i = 1; i <= numAssigns; i++){
        score = readScore("Enter score " + to_string(i) + ": ");
        if(score == -1.0){
            cout << "Illegal Score! Please try again!";
            i--;
        } else {
            total += score;
        }
    }
    if(numAssigns == 0){
        assignAvg = -1;
    } else {
        assignAvg = total / numAssigns;
    }

    return assignAvg;
};

double calcFinalScore(double assignAvg, double midterm, double final){
    // that takes the Assignment average score, the midterm score and the final exam score,
    // and calculates the final numerical score based on the appropriate weights for
    // assignments and exams. The assignments are weighted at 60%, the midterm and final
    // exams are weighted at 20% each.

    const double assignWeight = 0.6;
    const double midtermWeight = 0.2;
    const double finalWeight = 0.2;
    if(assignAvg != -1){
        return ((assignAvg * assignWeight) + (midterm * midtermWeight) + (final * finalWeight));
    } else { //If num of assignments is 0, need to calculate final score differently
        return ((midterm * midtermWeight) + (final * finalWeight)) / (midtermWeight + finalWeight);
    }
};

char calcLetterGrade(double finalScore){
    //that takes the finalScore and returns a letter grade. Print the letter grade in main().
    
    if(finalScore >= 3.3 && finalScore <= 4.0){
        return 'A';
    } else if(finalScore >= 2.8 && finalScore < 3.3){
        return 'B';
    } else if(finalScore >= 2.0 && finalScore < 2.8){
        return 'C';
    } else if(finalScore >= 1.2 && finalScore < 2.0){
        return 'D';
    } else if(finalScore >= 0.0 && finalScore < 1.2){
        return 'F';
    } else {
        cout << "ERROR IN CALCULATION: GRADE EITHER EXCEEDS 4.0 OR IS BELOW 0.0";
        return 0;
    }

    return 0;
};




// ------------- DESIGN -------------
/* 
Program Name: Grade Calculations


Program Description:
Final Grade in a course is a combination of Assignments average, Midterm and Final Exam scores. They are weighted differently. Let’s write a program to calculate the Final Calculated Score and the Letter Grade for a student in a course.

Design:
A. INPUT
Define the input variables including name data type. 
int numAssigns;
double input(score for each assignment)
double midterm, final
double midterm, final

B. OUTPUT
Define the output variables including data types. 
double finalScore;
char finalGrade;

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.
no calculations
finalScore = ((assignAvg * assignWeight) + (midterm * midtermWeight) + (final * finalWeight))

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt

DISPLAY "Welcome to my Final Grade Calculator!"
DISPLAY "Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!"
DISPLAY "The number of assignments must be between 0 and 10."
DISPLAY "All scores entered must be between 0 and 4."

DISPLAY "Enter the number of assignments (0 to 10): "
INPUT numOfAssignments

for(int i = 1; i <= numOfAssignments; i++){
    DISPLAY "Enter score " + i + ": "
    INPUT prompt
}
DISPLAY "Enter your midterm exam score: "
INPUT midterm
DISPLAY "Enter your final exam score: "
INPUT final

finalNumericScore = (assignAvg * 0.6) + (midterm * 0.2) + (final * 0.2)

if(finalNumericScore >= 3.3 && finalNumericScore <= 4.0){
    finalGrade = 'A'
} else if(finalNumericScore >= 2.8 && finalNumericScore < 3.3){
    finalGrade = 'B'
} else if(finalNumericScore >= 2.0 && finalNumericScore < 2.8){
    finalGrade = 'C'
} else if(finalNumericScore >= 1.2 && finalNumericScore < 2.0){
    finalGrade = 'D'
} else if(finalNumericScore >= 0.0 && finalNumericScore < 1.2){
    finalGrade = 'F'
} else {
    DISPLAY "ERROR IN CALCULATION: GRADE EITHER EXCEEDS 4.0 OR IS BELOW 0.0"
    return 0
}

DISPLAY "Your Final Numeric score is " + finalNumericScore
DISPLAY "Your final Grade is " + finalGrade

DISPLAY "Thank you for using my Grade Calculator!"


SAMPLE RUNS
///////////Sample Run 1///////////
Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 6
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 3.3
Enter score 5: 3.1
Enter score 6: 2.5
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.4
Your Final Grade is A
Thank you for using my Grade Calculator!
//////////////////////////////////
///////////Sample Run 2///////////
Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 3
Enter score 1: 3 
Enter score 2: 4 
Enter score 3: 2.5 
Enter your midterm exam score: 2.5
Enter your final exam score: 2
Your Final Numeric score is 2.8
Your Final Grade is B
Thank you for using my Grade Calculator!
//////////////////////////////////
///////////Sample Run 3///////////
Welcome to my Final Grade Calculator!
Please enter the following information and I will calculate your Final Numerical Grade and Letter Grade for you!
The number of assignments must be between 0 and 10.
All scores entered must be between 0 and 4.
Enter the number of assignments (0 to 10): 12
Illegal Value! Please try again!!
Enter the number of assignments (0 to 10): 5
Enter score 1: 3.4 
Enter score 2: 4 
Enter score 3: 2.5 
Enter score 4: 5.5
Illegal Score! Please try again!
Enter score 4: 3.5
Enter score 5: 3.1
Enter your midterm exam score: 3.5
Enter your final exam score: 4
Your Final Numeric score is 3.5
Your Final Grade is A
Thank you for using my Grade Calculator!
//////////////////////////////////

*/