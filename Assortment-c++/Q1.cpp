#include <iostream>
using namespace std;

int main() {
    int size;

    // User input 
    cout << "Enter the number of elements: ";
    cin >> size;


    int arr[size];

    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "a[" << i << "] = ";
        cin >> arr[i];
    }

    // User output 
    cout << "Negative elements from Array: ";
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }

    
 
}