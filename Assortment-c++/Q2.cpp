#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input row and column 
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int array[100][100];

  
    // Input of array
    cout << endl << "Enter array's elements:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }

    int max = array[0][0];

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }

    // Output 
    cout << endl << "The largest element is: " << max << endl;

    
}
