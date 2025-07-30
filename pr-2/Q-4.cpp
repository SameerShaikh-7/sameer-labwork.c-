#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int term = 1;
    int increment = 1;

    for (int i = 1; i <= n; i++) 
    
    {
        cout << term << " ";
        term = term + increment;
        increment++;
    }

   
}
