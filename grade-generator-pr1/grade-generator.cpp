#include <iostream>
using namespace std;

int main() {
    int score;
    char grade;

    // Input score
    cout << "Enter your score (0-100): ";
    cin >> score;

    //Grade using ternary operators
    grade = (score >= 90) 
           ? 'A' 
           :(score >= 80) 
           ? 'B' 
           :(score >= 70) 
           ? 'C' 
           :(score >= 60) 
           ? 'D' 
           : 'F';

    cout << "Your grade is " << grade << "." << endl;

    //switch-case
    switch (grade) {
        case 'A':
            cout << "excellent work!" << endl;
            break;


        case 'B':
            cout << "well done." << endl;
            break;

        case 'C':
            cout << "good job." << endl;

            break;

        case 'D':
            cout << "you passed, probably you could do better." << endl;
            break;
        case 'F':
            cout << "Sorry you are failed" << endl;
            break;
        default:
            cout << "invalid grade." << endl;
    }

    // if--else 
    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') 
    {
        cout << "Congratulations! You are eligible for the next level." << endl;
    } 
    
    else 
    {
        cout << "Please try again next time." << endl;
    }

    return 0;
}
