#include <iostream>
using namespace std;

int main() 

{
    int num;
    cout << "Enter any number: ";
    cin >> num;

    int last = num % 10;     
    int first = num;

    
    while (first >= 10) 
    {
        first = first / 10;
    }

    int sum = first + last;

    cout << "The sum of the first and the last digit: " << sum << endl;

    
}
