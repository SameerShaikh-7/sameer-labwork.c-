#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    //Input of rows and columns
    cout << "Enter row size: ";
    cin >> rows;
    cout << "Enter column size: ";
    cin >> cols;

    int array[100][100];
    int transpose[100][100];

    //Input array
    cout << endl << "Enter array :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> array[i][j];
        }
    }

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = array[i][j];
        }
    }

    //transpose matrix
    cout << endl << "The transpose matrix is:" << endl;
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

   
}


 