#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col];

    cout << endl << "Enter the elements:" << endl;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << "Enter arr[" << r << "][" << c << "] : ";
            cin >> arr[r][c];
        }
    }

    cout << endl << "Cube of each element:" << endl;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            int cube = arr[r][c] * arr[r][c] * arr[r][c];
            cout << cube << " ";
        }
        cout << endl;
    }

 
}
