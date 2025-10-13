#include "Escalator_main.cpp"
#include <iostream>
using namespace std;

int main()
{
    IntStack stack;
    int choice, value;

    cout << endl
         << "====== Stack Project ======" << endl;
    do
    {
        cout << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Show Top" << endl;
        cout << "4. Check Empty" << endl;
        cout << "5. Check Full" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.showTop();
            break;
        case 4:
            cout << stack.isEmpty() << endl;
            break;
        case 5:
            cout << stack.isFull() << endl;
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice ! Try again" << endl;
        }
    } while (choice != 0);

    return 0;
}
