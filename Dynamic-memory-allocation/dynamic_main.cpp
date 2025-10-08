#include "dynamic_memory_pr.cpp"
#include <iostream>
using namespace std;



int main() 
{
    LinkedList list;
    int choice, value;

    cout << endl << "=== Linked List Menu ===" << endl;

    while (true) {
        cout << endl;
        cout << "1. Insert number" << endl;
        cout << "2. Display list" << endl;
        cout << "3. Reverse list" << endl;
        cout << "4. Find number by position" << endl;
        cout << "5. Delete number" << endl;
        cout << "0. Exit program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

           switch (choice) {
        case 1:
            cout << "Enter a number to insert: ";
            cin >> value;
            list.insertAtStart(value);
            break;

        case 2:
            cout << "List : ";
            list.displayList();
            break;

        case 3:
            cout << "Reverse list..." << endl;
            list.reverseList();
            break;

        case 4:
            cout << "Enter position to find: ";
            cin >> value;
            list.findAtPosition(value);
            break;

        case 5:
            cout << "Enter position to delete: ";
            cin >> value;
            list.deleteAtPosition(value);
            break;

        case 0:
            cout << "Exiting..." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again" << endl;
        }
        
    }
}